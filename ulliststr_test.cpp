/* Write your test code for the ULListStr in this file */
#include "ulliststr.h"
#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
    ULListStr node;
    node.push_back("7");
    node.push_front("8");
    node.push_back("9");

    cout << node.get(0) << " " << node.get(1) << " " << node.get(2) << endl;

    ULListStr node2;
    node2.push_back("12");
    node2.push_back("11");
    node2.pop_front();
    node2.push_front("98");
    node2.push_back("19");
    node2.pop_back();
    node2.push_front("88");

    cout << node2.get(0) << " " << node2.get(1) << " " << node2.get(2) << endl;

    ULListStr node3;
    node3.push_front("11");
    node3.push_front("17");
    node3.push_front("13");
    node3.push_front("99");
    node3.push_back("1");
    node3.push_front("32");
    node3.push_front("93");

    for (int i = 0; i < 7; i++) {
        cout << node3.get(i) << " ";
    }
    cout << endl;

    ULListStr node5;
    node5.push_back("23");
    node5.push_back("12");
    node5.push_front("19");
    node5.push_back("9");
    node5.push_back("1");
    node5.push_back("88");
    node5.push_front("16");
    node5.push_back("99");
    node5.push_back("21");
    node5.push_front("82");
    node5.push_back("63");
    node5.push_back("72");
    node5.push_front("35");
    node5.push_back("0");

    for (int i = 0; i < 14; i++) {
        cout << node5.get(i) << " ";
    }
    cout << endl;
}
