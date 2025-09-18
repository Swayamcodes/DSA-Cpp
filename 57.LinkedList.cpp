#include <iostream>
using namespace std;

class Node {
    public :
    int data;
    Node* next; //self-referential structure

    Node(int val) {
        data = val;
        next = NULL;
    };


};

class List {
    Node* head;
    Node* tail;

    List()
    {
        head = NULL;
        tail = NULL;
    }

    void push_front (int val) {
        Node* newNode = new Node(val);
        if (head == NULL ) {
            head = newNode;
            tail = newNode;
        } else {
            newNode->next = head; //link new node to previous head
            head = newNode;
        }
    }

};

int main() {
    List ll;  
    return 0;
};