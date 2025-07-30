#include<iostream>
using namespace std;

// int main(){
//     char button;
//     cout<<"Input a character"<<endl;
//     cin>>button;

//     if (button=='a')
//     {
//         cout<<"Hello"<<endl;

//     }
//     else if (button=='b')
//     {
//         cout<<"Namaste"<<endl;
//     }
//     else if (button=='c')
//     {
//         cout<<"Hola"<<endl;
//     }
//     else if (button=='d')
//     {
//         cout<<"Ciao"<<endl;
//     }
//     else
//     {
//         cout<<"I am still learning"<<endl;
//     }
//     return 0;
// }

// Now using switch statement

// switch (button)
// {
// case 'a':
//     cout<<"Hello"<<endl;
//     break;
// case 'b':
//     cout<<"Namaste"<<endl;
//     break;
// case 'c':
//     cout<<"Hola"<<endl;
//     break; 
// case 'd':
//     cout<<"Ciao"<<endl;
//     break;

// default:
//     cout<<"I am still learning"<<endl;
//     break;
// }
// return 0;
// }

// Implement a simple calculator using switch

int main(){
    float n1,n2;
    cout<<"Enter two numbers"<<endl;
    cin>>n1>>n2;

    char op;
    cout<<"Enter operator"<<endl;
    cin>>op;

    switch (op)
    {
    case '+':
        cout<<n1+n2<<endl;
        break;
    case '-':
        cout<<n1-n2<<endl;
        break;        
    case '*':
        cout<<n1*n2<<endl;
        break;       
    case '/':
        cout<<n1/n2<<endl;
        break;    
    default:
        cout<<"Enter another operator"<<endl;
        break;
    }
    return 0;
}