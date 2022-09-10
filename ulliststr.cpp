#include "ulliststr.h"

#include <cstddef>
#include <stdexcept>
#include <iostream>

using namespace std; 

ULListStr::ULListStr() {
    head_ = NULL;
    tail_ = NULL;
    size_ = 0;
}

ULListStr::~ULListStr() { clear(); }

bool ULListStr::empty() const { return size_ == 0; }

size_t ULListStr::size() const { return size_; }

// WRITE YOUR CODE HERE

void ULListStr::set(size_t loc, const std::string& val) {
    std::string* ptr = getValAtLoc(loc);
    if (ptr == NULL) {
        throw std::invalid_argument("Bad location");
    }
    *ptr = val;
}

std::string& ULListStr::get(size_t loc) {
    std::string* ptr = getValAtLoc(loc);
    if (ptr == NULL) {
        throw std::invalid_argument("Bad location");
    }
    return *ptr;
}

std::string const& ULListStr::get(size_t loc) const {
    std::string* ptr = getValAtLoc(loc);
    if (ptr == NULL) {
        throw std::invalid_argument("Bad location");
    }
    return *ptr;
}

void ULListStr::clear() {
    while (head_ != NULL) {
        Item* temp = head_->next;
        delete head_;
        head_ = temp;
    }
    tail_ = NULL;
    size_ = 0;
}

std::string const& ULListStr::back() const { return tail_->val[tail_->last - 1]; }

std::string const& ULListStr::front() const { return head_->val[head_->first]; }

void ULListStr::push_back(const std::string& val) {
    if (empty()) {
        Item * one = new Item; 
        one->val[0] = val;
        size_++;
        one->first = 0;
        one->last = 1;
        head_ = one;
        tail_ = one;
        return;
    } else if (tail_->last == 10) {
        Item* newItem = new Item;
        newItem->last = 1;
        newItem->val[newItem->first] = val; 
        tail_->next = newItem;
        newItem->prev = tail_;
    } else {
        tail_->val[tail_->last] = val;
        tail_->last++;
    }
    size_++; 
}

void ULListStr::pop_back() {
  if (head_->last - head_->first == 1) {
    clear(); 
  } else {
    tail_->val[tail_->last] = " "; 
    tail_->last--; 
  }
}

void ULListStr::push_front(const std::string& val) {
    if (empty()) {
        Item * one = new Item; 
        one->val[9] = val;
        size_++;
        one->first = 9;
        one->last = 10;
        head_ = one;
        tail_ = one;
        return;
    } else if (head_->first == 0) {
        Item* newItem = new Item;
        newItem->first = 9;
        newItem->last = 10;
        newItem->val[newItem->first] = val; 
        head_->prev = newItem;
        newItem->next = head_;
        head_ = newItem; 
    } else {
        head_->first--; 
        head_->val[head_->first] = val;
    }
    size_++; 
}

void ULListStr::pop_front() {
  if (head_->last - head_->first == 1) {
    clear(); 
  } else {
    head_->val[head_->first] = " "; 
    head_->first++;
  }
}