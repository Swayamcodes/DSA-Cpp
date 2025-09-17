#include <iostream>
#include <string>
using namespace std;

class Shape { //abstract class
    virtual void draw() = 0; //pure virtual function
};

class Circle : public Shape {
    public :
    void draw() {
        cout << "Drawing Circle" << endl;
    }
};


//Static keyword is used to allocate memory only once during the lifetime of a class
//Static members are shared by all objects of the class

void fun() { //function with static variable
    static int count = 0; //init static variable only once
    count++;
    cout << "Count: " << count << endl;
}

int main() {
    Circle c1;
    c1.draw();
    return 0;
};

