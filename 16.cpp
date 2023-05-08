    // WAP to check whether the entered number is prime or not.
#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n,s=0;
    cout<<"Enter a number"<<endl;
    cin>>n;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            s=1;
            break;
        }
    }
    if(s==0)
        cout<<n<<" is a prime number";
    else
        cout<<n<<" is not a prime";
    return 0;
}