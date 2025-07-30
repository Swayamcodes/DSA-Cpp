#include<iostream>
using namespace std;

// int main()
// {
//     int i=1;
//     //  1       3
//     i = i++ + ++i;

//     cout<<i<<endl;

//     int a=1;
//     int b=2;
//     int c;
//     //  1   2   1     2      3     4
//     c = a + b + a++ + b++ + ++a + ++b;

//     cout<<a<<" "<<b<<" "<<" "<<c<<endl;

//     int e=0;
//     //  0     0     1     1 
//     e= e++ - --e + ++e - e--;
//     cout<<e<<endl;

//     int l=1, m=2, n=3;
// //          1     2      3
//     int o = l-- - m-- - n--;

//     cout<<l<<endl;//0
//     cout<<m<<endl;//1
//     cout<<n<<endl;//2
//     cout<<o<<endl;//3

//     return 0;
// }

// RELATIONAL OPERATORS

// input a number n tell whether it is equal to,less than or more than 10

int main(){

    int n;
    cin>>n;

    if (n > 10)
    {
        cout<<"More than 10"<<endl;
    }
    else if (n < 10)
    {
        cout<<"Less than 10"<<endl;
    }
    else
    {
        cout<<"Equal to 10"<<endl;
    }
    
}