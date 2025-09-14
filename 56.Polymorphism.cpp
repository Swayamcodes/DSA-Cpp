#include <iostream>
#include <string>
using namespace std;

class Student {
    public :
    name string;

    Student() {
        cout << "Non-parameterized constructor called" << endl;
    }
    Student(string name) {
        this->name = name;
        cout << "Parameterized constructor called" << endl;
    }

}

int main() {
    Student s1; //non-parameterized constructor
    Student s2("Alice"); //parameterized constructor
    return 0;

}