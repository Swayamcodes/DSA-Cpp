#include <iostream>
using namespace std;

class Node {
    public :
    int data;
    Node* next; //self-referential structure

    Node(int val) {
        data = val;
        next = NULL;
    }
}