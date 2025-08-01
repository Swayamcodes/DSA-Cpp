#include <iostream>
#include <string>
using namespace std;

int main() {
    // Declaration and Initialization
    string s1 = "Hello";
    string s2("World");
    string s3;
    

    // Input
    getline(cin, s3); // reads entire line with spaces

    // Concatenation
    string s4 = s1 + " " + s2;

    // Length / Size
    cout << "Length: " << s4.length() << "\n";

    // Accessing Characters
    cout << "First char: " << s4[0] << "\n";

    // Substring
    string sub = s4.substr(0, 5); // "Hello"

    // Find
    size_t pos = s4.find("World");
    if (pos != string::npos) {
        cout << "'World' found at position: " << pos << "\n";
    }

    // Erase
    s4.erase(5, 1); // removes space

    // Insert
    s4.insert(5, ",");

    // Replace
    s4.replace(0, 5, "Hi");

    cout << "Final String: " << s4 << "\n";
    return 0;
}
