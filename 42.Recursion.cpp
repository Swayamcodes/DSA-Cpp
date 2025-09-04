#include <iostream>
using namespace std;

void printNum(int n) {
    //base case
    if(n==1) {
        cout << 1;
        return;
    }
    cout<<n<<endl;
    func(n-1); //recursive call
}

int main() {
    printNum(5);
    //Recursion

    return 0;
}