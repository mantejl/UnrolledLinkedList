/*
CSCI 104: Homework 1 Problem 1

Write a recursive function to split a sorted singly-linked
list into two sorted linked lists, where one has the even
numbers and the other contains the odd numbers. Students
will receive no credit for non-recursive solutions.
To test your program write a separate .cpp file and #include
split.h.  **Do NOT add main() to this file**.  When you submit
the function below should be the only one in this file.
*/

#include "split.h"

#include <iostream>
/* Add a prototype for a helper function here if you need */

void split(Node*& in, Node*& odds, Node*& evens) {
    /* Add code here */
    // WRITE YOUR CODE HERE
    if (in == nullptr) {
        odds = nullptr;
        evens = nullptr;

        return;
    } else {
        if (in->value % 2 == 0) {

            evens = in;

            split(in->next, odds, in->next);
        } else if (in->value % 2 != 0) {

            odds = in;

            split(in->next, in->next, evens);
        }
    }
}

/* If you needed a helper function, write it here */
// WRITE YOUR CODE HERE