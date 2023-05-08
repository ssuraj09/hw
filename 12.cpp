    // WAP to print the sum of all numbers up to a given number.

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s=0;
    cout<<"Enter a number"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        s+=i;
    }
    cout<<"sum is "<<s;
    return 0;
}