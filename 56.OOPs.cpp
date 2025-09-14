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

    //non-parameterized constructor
     Teacher() { //constructor
        cout << "Constructor called" << endl;
        dept = "CSE"; //default value
    };

    //parameterized constructor
    Teacher(string name, string dept, string subject, double salary) {
        this->name = name; //this pointer 
        this->dept = dept;
        this->subject = subject;
        this->salary = salary;
    };

    //copy constructor
    Teacher(Teacher &obj) { //pass by reference
        cout << " I am Custom Copy Constructor (called)" << endl;
        this->name = obj.name;
        this->dept = obj.dept;
        this->subject = obj.subject;
        this->salary = obj.salary;

    };
    
    

    //methods/member functions
    void changeDept(string newDept) {
        dept = newDept;
    }

    void getDetails() {
        cout << "Name: " << name << endl;
        cout << "Department: " << dept << endl;
        cout << "Subject: " << subject << endl;
        cout << "Salary: " << salary << endl;
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

class Account {
    private:
    double balance;
    string password; //data hiding

    public:
    string accountID;
    string accountHolderName;
};

int main () {
    Teacher t1("Swayam", "CSE", "OOP", 50000 ); //constructor called
    t1.getDetails();

    Teacher t2(t1); //copy constructor 
    t2.getDetails();
    // t1.name = "John Doe";
    // // t1.dept = "CSE";
    // t1.subject = "Data Structures";
    // t1.setSalary(50000); // Set salary using setter method 
  
    // Teacher t2;
    // Teacher t3;

    // cout << "Teacher 1: " << t1.name << ", " << t1.dept << ", " << t1.subject << endl;
    return 0;
};

//g++ -std=c++14 56.OOPs.cpp && ./a.out

