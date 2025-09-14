class Students {
    public:
    string name;
    double* gpaPtr;

    Students(string name, double gpa) {
        this->name = name;
        gpaPtr = new double; //dynamic memory allocation
        *gpaPtr = gpa;

    }

    Students(Students &obj) {
        this->name = obj.name;
        gpaPtr = new double; //allocate new memory
        *gpaPtr = *(obj.gpaPtr); //deep copy
    } 

    //destructor
    ~Students() {
        cout << "Hi, I am Destructor" << endl;
        delete gpaPtr; //free memory
    }

     void getInfo() {
        cout << "Name: " << name << endl;
        cout << "GPA: " << *gpaPtr << endl;

    }  
  };

int main1() {
    Students s1("Alice", 3.8);
    Students s2(s1); //copy constructor

    s1.getInfo(); 
    *(s2.gpaPtr) = 4.0; //modifying s2's GPA
    s1.getInfo(); //s1's GPA should remain unchanged if deep copy is implemented but it will change if shallow copy is implemented
    s2.getInfo();

    s2.name = "Bob";
    s2.getInfo();
    
    
    return 0;
}
;