#include <iostream>
#include <cstring>  // For char[] functions like strlen, strcpy, strcmp
#include <string>   // For C++ string
using namespace std;

int main() {
    // ------------------- Char Arrays ------------------------
    char name[20] = "Alice";

    // Length of char array
    cout << "Length (char[]): " << strlen(name) << "\n";

    // Copy another string
    char other[20];
    strcpy(other, name);
    cout << "Copied string: " << other << "\n";

    // Compare strings
    char a[] = "apple";
    char b[] = "banana";
    if (strcmp(a, b) < 0) {
        cout << "apple comes before banana\n";
    }

    // Reverse a char array manually
    int n = strlen(a);
    for (int i = 0; i < n / 2; ++i) {
        swap(a[i], a[n - i - 1]);
    }
    cout << "Reversed a: " << a << "\n";

    // ------------------- C++ String -------------------------
    string str = "hello"; //dynamic => runtime resize

    // Length
    cout << "\nLength (string): " << str.length() << "\n";

    // Append
    str += " world";
    cout << "Appended: " << str << "\n";

    // Substring
    cout << "Substring (0-4): " << str.substr(0, 5) << "\n";

    // Find
    size_t idx = str.find("world");
    if (idx != string::npos) {
        cout << "'world' found at index: " << idx << "\n";
    }

    // Erase
    str.erase(5, 6);  // remove " world"
    cout << "After erase: " << str << "\n";

    // Compare
    string x = "abc", y = "xyz";
    if (x < y) {
        cout << x << " comes before " << y << "\n";
    }

    return 0;
}

/*
==========================
💡 Short Notes:

-- CHAR ARRAY (C-Style) --
- Use functions from <cstring>
- strlen(arr): length
- strcpy(dest, src): copy
- strcmp(a, b): compare
- Manual memory handling
- Used in low-level manipulation, memory critical cases

-- STRING (C++ STL) --
- str.length() or str.size(): get length
- str += "text": append
- str.substr(start, len): get substring
- str.find("text"): find substring index
- str.erase(pos, len): delete portion
- Comparison via <, >, == is supported

🆚 When to Use:
- Use `string` by default (safe & powerful)
- Use `char[]` for pointer-level logic or performance optimization

*/
