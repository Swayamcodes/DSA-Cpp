#include <iostream>
#include <string>
using namespace std;

class Teacher {
    private:
    double salary;
     
    public:
    //properties/attributes
    string name;
    string dept;
    string subject;
    

    //methods/member functions
    void changeDept(string newDept) {
        dept = newDept;
    }
    //setter
    void setSalary(double s) {
        salary = s;
    }
    //getter
    double getSalary() {
        return salary;
    }
};

class Student {
    public:
    string name;
    int rollNo;
    string dept;
    int year;

    void changeYear(int newYear) {
        year = newYear;
    }
};

int main () {
    Teacher t1;
    t1.name = "John Doe";
    t1.dept = "CSE";
    t1.subject = "Data Structures";
    t1.setSalary(50000); // Set salary using setter method
  
    Teacher t2;
    Teacher t3;

    cout << "Teacher 1: " << t1.name << ", " << t1.dept << ", " << t1.subject << ", " << t1.salary << endl;
    return 0;
}

//g++ -std=c++14 56.OOPs.cpp && ./a.out