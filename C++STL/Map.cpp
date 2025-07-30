#include <iostream>
#include <map>
using namespace std;

int main() {
    // ----------- Declaration and Initialization -------------
    map<string, int> marks;

    // ----------- Inserting values ---------------------------
    marks["Alice"] = 90;
    marks["Bob"] = 85;
    marks["Charlie"] = 78;

    // Alternate way to insert
    marks.insert({ "David", 88 });

    // ----------- Accessing values ---------------------------
    cout << "Marks of Alice: " << marks["Alice"] << "\n";

    // ----------- Traversing the map -------------------------
    cout << "\nAll marks:\n";
    for (auto it : marks) {
        cout << it.first << " => " << it.second << "\n";
    }

    // ----------- Find an element ----------------------------
    if (marks.find("Bob") != marks.end()) {
        cout << "\nBob is present in the map.\n";
    }

    // ----------- Erase an element ---------------------------
    marks.erase("Charlie");

    cout << "\nAfter erasing Charlie:\n";
    for (auto it : marks) {
        cout << it.first << " => " << it.second << "\n";
    }

    // ----------- Size and Clear -----------------------------
    cout << "\nSize of map: " << marks.size() << "\n";
    marks.clear();
    cout << "Size after clear(): " << marks.size() << "\n";

    return 0;
}
