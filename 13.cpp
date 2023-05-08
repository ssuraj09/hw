    // WAP to find the factorial of a given number.
#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n,f=1;
    cout<<"Enter a number"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        f*=i;
    }
    cout<<n<<" factorial is "<<f;
    return 0;
}