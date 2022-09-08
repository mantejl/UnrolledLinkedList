#include <iostream>
#include "split.h"

using namespace std;

void print (Node* current) {
    while ( current != NULL) {
        cout << current->value << endl; 
        current = current->next; 
    }
}

int main (int argc, char *argv[]) {
    Node *head; 
    Node *six = new Node(18, nullptr); 
    Node *five = new Node(12, six); 
    Node *four = new Node(7, five); 
    Node *three = new Node(5, four); 
    Node *two = new Node(4, three); 
    Node *one = new Node(1, two); 

    head = one; 

    Node *odds = nullptr;
    Node *evens = nullptr; 

    split(head, odds, evens);

    print(odds); 
    print(evens); 

    delete six; 
    delete five; 
    delete four; 
    delete three; 
    delete two; 
    delete one; 

    return 0; 
}

