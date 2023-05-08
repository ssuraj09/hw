    // WAP to find the reverse of a number.

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,r,s=0;
    cout<<"Enter a number"<<endl;
    cin>>n;
    for(int i=1;n>0;i++)
    {
        r=n%10;
        s=(r+s*10);
        n/=10;
    }
    cout<<"reverse is "<<s;
    return 0;
}