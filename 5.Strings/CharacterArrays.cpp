#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char name[100];
    cout << "Enter your name: ";
    cin.getline(name, 100);

    cout << "Length: " << strlen(name) << "\n";

    char copy[100];
    strcpy(copy, name);  // Copy name into copy
    cout << "Copy: " << copy << "\n";

    strcat(copy, "!!!"); // Append !!!
    cout << "After strcat: " << copy << "\n";

    if (strcmp(name, copy) == 0)
        cout << "Both are same\n";
    else
        cout << "Different strings\n";

    return 0;
}
