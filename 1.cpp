#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,s;
    float p;
    cout<<"Enter marks"<<endl;
    cin>>a>>b>>c>>d>>e;
    s=(a+b+c+d+e);
    p=(s/500.0)*100;
    cout<<"Total marks is "<<s<<endl<<"Percentage is " <<p;
    return 0;
}