    // WAP to print sum of even and odd numbers from 1 to N numbers.

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,e=0,o=0;
    cout<<"Enter a number"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
            e+=i;
        else
            o+=i;
    }
    cout<<"sum of even numbers are "<<e<<endl<<"sum of odd numbers are "<<o;
    return 0;
}