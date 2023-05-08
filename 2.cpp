                // FOR SIMPLE INTEREST

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     float p,r,t,si;
//     cout<<"Enter principal rate and time"<<endl;
//     cin>>p>>r>>t;
//     si=(p*r*t)/100;
//     cout<<"si is "<<si;
//     return 0;
// }


            // FOR COMPOUND INTEREST

#include<bits/stdc++.h>

using namespace std;
int main()
{
    int p,n;
    float r,t,ci;
    cout<<"Enter principal,rate,time,n"<<endl;
    cin>>p>>r>>t>>n;
    ci=p*pow((1+r/n),(n*t));
    cout<<"Compound interest is "<<ci;
    return 0;
}