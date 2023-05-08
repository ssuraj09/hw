    //WAP to find the sum of digits of the entered number.

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
        s+=r;
        n/=10;
    }
    cout<<"sum of digits is "<<s;
    return 0;
}