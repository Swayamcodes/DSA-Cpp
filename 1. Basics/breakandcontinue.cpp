#include<iostream>
using namespace std;

// int main(){
//     int pocketmoney=3000;
//     for (int date=1;date<=30;date++)
//     {
//         if (date%2==0)
//         {
//             continue;
//         }
//         if (pocketmoney==0)
//         {
//             break;
//         }
//        cout<<"Go out today!"<<endl;
//        pocketmoney=pocketmoney-300;

//     }
//     return 0;
// }

// Print numbers from 1 to 100 except the ones which are divisible by three.

// int main(){
//     for (int i = 0; i < 100; i++)
//     {
//         if (i%3==0)
//         {
//             continue;
//         }
//         cout<<i<<endl;
//     }
    
    
// }

// Check if a number is Prime or not

int main(){
    int n;
    cin>>n;

    int i;
        for (i = 2; i < n; i++)
        {
            if (n%i==0)
            {
                cout<<"Non Prime"<<endl;
                break;
            }
            
        }
       if (i==n)
       {
        cout<<"Prime"<<endl;
       }
        
    return 0;
}

// Print Prime numbers from a to b

// int main(){
//     int a,b;
//     cin>>a>>b;

//     for (int num = 0; num <= b; num++)
//     {
//         int i;
//         for(i=2;num;i++){
//             if (num%i==0)
//             {
//                 break;
//             }
//         }
//          if (i==num)
//             {
//                 cout<<num<<endl;
//             }
//     }
//     return 0;
// }