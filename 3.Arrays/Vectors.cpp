#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec ;

    vec.push_back(25);
    vec.push_back(35);
    vec.push_back(45);
    vec.push_back(55);
    vec.push_back(65);
    
     cout << vec.size() << endl;
     cout << vec.capacity() << endl;

    vec.pop_back();




    // for (int val : vec) { //for each loop
    //      cout << vec[0] << endl;
    // }
    cout << vec.front() << endl;
    cout << vec.back() << endl;
    cout << vec.at(1) << endl;
   
    return 0;

}