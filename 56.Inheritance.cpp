#include <iostream>
#include <string>
using namespace std;

class Person {
    public:
    string name;
    int age;

    // Person(string name, int age) {
    //     this-> name = name;
    //     this-> age = age ;
    // }
};

class Student : public Person { //inheritance
    public:
    int rollNo;
    string course;

   

    void getDetails() {
        cout << "Name: " << name << endl; //inherited from Person class
        cout << "Age: " << age << endl; //inherited from Person class
        cout << "Roll No: " << rollNo << endl;
        cout << "Course: " << course << endl;
    }
};

int main () {
    Student s1;
    s1.name = "Alice";
    s1.age = 20;
    s1.rollNo = 101;
    s1.course = "Computer Science";
    s1.getDetails();
    return 0;
}