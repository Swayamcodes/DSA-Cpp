#include <iostream>
#include <string>
using namespace std;

class Teacher {
    public:
    //properties/attributes
    string name;
    string dept;
    string subject;
    double salary;

    //methods/member functions
    void changeDept(string newDept) {
        dept = newDept;
    }
};

int main () {
    Teacher t1;
    t1.name = "John Doe";
    t1.dept = "CSE";
    t1.subject = "Data Structures";
    t1.salary = 50000;
    Teacher t2;
    Teacher t3;

    cout << "Teacher 1: " << t1.name << ", " << t1.dept << ", " << t1.subject << ", " << t1.salary << endl;
    return 0;
}

//g++ -std=c++14 56.OOPs.cpp && ./a.out