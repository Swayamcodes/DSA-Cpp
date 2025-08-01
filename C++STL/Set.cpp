#include <iostream>
#include <set>
#include <unordered_set>
using namespace std;

int main() {
    // --------- set (sorted, unique) ---------
    set<int> s;
    s.insert(10);
    s.emplace(20);
    s.insert(10); // duplicate ignored

    cout << "Set:\n";
    for (int x : s) cout << x << " ";

    cout << "\nCount 10: " << s.count(10);  // 1 if exists
    s.erase(20);
    if (s.find(10) != s.end()) cout << "\n10 found";
    cout << "\nSize: " << s.size();
    cout << "\nEmpty: " << s.empty() << "\n";

    // --------- unordered_set (no order, unique) ---------
    unordered_set<int> us;
    us.insert(3);
    us.emplace(4);

    cout << "\nUnordered Set:\n";
    for (int x : us) cout << x << " ";

    // --------- multiset (sorted, duplicates allowed) ---------
    multiset<int> ms;
    ms.insert(5);
    ms.insert(5);
    ms.emplace(6);

    cout << "\n\nMultiset:\n";
    for (int x : ms) cout << x << " ";

    return 0;
}

/*
📝 Quick Notes:
- set: sorted, unique
- unordered_set: fast, no order, unique
- multiset: sorted, allows duplicates

🔧 Functions:
- insert(x), emplace(x)
- count(x): occurrences
- erase(x), find(x)
- size(), empty()
*/
