                // SWAP USING THIRD VARIABLE
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter two numbers"<<endl;
    cin>>a>>b;
    cout<<"before swap a="<<a<<" "<<"b="<<b<<endl;
    c=a;
    a=b;
    b=c;
    cout<<"after swap a="<<a<<" "<<"b="<<b<<endl;
    return 0;
}