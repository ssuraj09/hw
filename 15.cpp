// WAP to print the Fibonacci series.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a1 = 0, a2 = 1, a3=1, n;
    cout << "Enter a number" << endl;
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        cout<<a3<<" ";
        a3=a1+a2;
        a1=a2;
        a2=a3;
    }

    return 0;
}