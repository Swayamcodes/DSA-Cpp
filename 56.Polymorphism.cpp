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

};

class Print { // function overloading
    public :
    void show(int x) {
        cout << "Integer: " << x << endl;
    }
    void show(string str) {
        cout << "String: " << str << endl;
    }
    void show(double d) {
        cout << "Double: " << d << endl;
    }

};

class Parent { // function overriding
    public :
    void getInfo() {
        cout << "I am Parent class" << endl;
    }

    virtual void hello() {
        cout << "Hello from Parent class" << endl;
    }
};
class Child : public Parent {
    public :
    void getInfo() { //overriding
        cout << "I am Child class" << endl;
    }
    void hello() override { //overriding
        cout << "Hello from Child class" << endl;
    }
};

int main() {
    Student s1; //non-parameterized constructor
    Student s2("Alice"); //parameterized constructor
    Print p1;
    p1.show(5);
    p1.show("Hello");
    p1.show(3.14);

    Child c1;
    c1.getInfo(); //Child class method (overriding)
    c1.hello(); //Child class method (overriding) 

    return 0;

}