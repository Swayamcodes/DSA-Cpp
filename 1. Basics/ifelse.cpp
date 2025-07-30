#include<iostream>
using namespace std;

int main() {
    int savings;
    cout<<"Enter savings"<<endl;
    cin>>savings;

    if (savings>5000)
    { if (savings>10000)
    {
        cout<<"Road Trip with Niharika\n";
    }
    else{
        cout<<"Shopping with Niharika\n";
    }
       
    }
    else if (savings>2000)
    {
        cout<<"Sanyukta\n";
    }
    else {
        cout<<"Friends\n";
    }

    return 0;
}

// int main()
// {
//     int a,b,c;
//     cin>>a>>b>>c;

//     if (a>b)
//     {
//         if (a>c)
//         {
//             cout<<a<<endl;
//         }
//         else
//         {
//             cout<<c<<endl;
//         }
        
//     }
//     else
//     {
//         if (b>c)
//         {
//             cout<<b<<endl;
//         }
        
//     }
//     return 0;
    

// }