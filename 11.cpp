            //WAP that takes two operands and one operator from the user and perform the operation and prints the result
            //by using Switch statement.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    char n;
    cout<<"Enter two numbers"<<endl;
    cin>>a>>b;
    cout<<"Enter a operator"<<endl;
    cin>>n;
    switch(n)
    {
        case '+':
            cout<<"sum is "<<(a+b);
            break;
        case '-':
            cout<<"sub is "<<(a-b);
            break;
        case '*':
            cout<<"mul is "<<(a*b);
        case '/':
            cout<<"div is "<<(a/b);
                break;
        default:
            cout<<"invalid input";    
    }
    return 0;
}            