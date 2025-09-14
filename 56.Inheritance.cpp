#include <iostream>
#include <string>
using namespace std;

class Person {
    public:
    string name;
    int age;

    Person(string name, int age) {
        this-> name = name;
        this-> age = age ;
    }

    Person() {
        cout << "Person Constructor called" << endl;
    };
};

class Student : public Person { //inheritance
    public:
    int rollNo;
    string course;

    Student(string name, int age) : Person(name, age){ //calling base class constructor
        cout << "Student Constructor called" << endl;
    };

   //First it will call Person's constructor then Student's constructor
   //and destructor will be called in reverse order

    void getDetails() {
        cout << "Name: " << name << endl; //inherited from Person class
        cout << "Age: " << age << endl; //inherited from Person class
        cout << "Roll No: " << rollNo << endl;
        cout << "Course: " << course << endl;
    }
};

int main () {
    Student s1("Alice", 20);
    
    s1.getDetails();
    return 0;
}