#include <iostream>
using namespace std;

// int main() {
//     int n = 4;

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < i + 1; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// int main() { //Reverse triangle
//     int n = 4;

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1 ; j > 0; j--)
//         {
//             cout << j;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// int main() { //Floyds Triangle
//     int n = 4;
//     int num = 1;

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < i + 1; j++)
//         {
//             cout << num << " ";
//             num++;
//         }
//         cout << endl;
//     }
//     return 0;
// }

int main() { //Inverted Triangle
    int n = 4;
    

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i ; j++)
        {
            cout << " " ;
        }
        for (int j = 0; j < n - i; j++)
        {
            cout << (i+1) ;
        }
        
        cout << endl;
    }
    return 0;
}