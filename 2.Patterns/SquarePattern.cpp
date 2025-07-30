#include <iostream>
using namespace std;

// int main() {
//     int n =4;
  

//     for ( int i = 0; i < n; i++)
//     {
//       for ( int j = 0; j < n; j++)
//       {
//         cout << j ;
//       }
      
//         cout << endl  ;
//     }
//     return 0;
// }

// int main() {
//     int n = 4;
  

//     for ( int i = 0; i < n; i++)
//     {
//         char ch = 'A';
//       for ( int j = 0; j < n; j++)
//       {
//         cout << ch ;
//         ch = ch + 1;
//       }
      
//         cout << endl  ;
//     }
//     return 0;
// }

int main() {
  int n = 3;
  int num = 1;

  for ( int i = 0; i < n; i++)
  {
    for ( int j = 0; j < n; j++)
    {
      cout << num << " ";
      num++;
    }
    cout<< endl;
  }
  return 0;
}