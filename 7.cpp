                    //the greatest of three numbers.

#include<bits/stdc++.h>

using namespace std;
int main()
{
    int a,b,c,m;
    cout<<"Enter three numbers"<<endl;
    cin>>a>>b>>c;
    m=max(max(a,b),max(a,c));
    cout<<"Maximum is "<<m;
    return 0;
}