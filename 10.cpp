                /*WAP that accepts marks of five subjects and finds percentage and prints grades according to the following
criteria:
Between 90-100%--------------Print ‘A’
80-90%----------------------------Print ‘B’
60-80%---------------------------Print ‘C’
Below 60%----------------------Print ‘D’*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,s;
    float p;
    cout << "Enter marks of five subjects" << endl;
    cin>>a>>b>>c>>d>>e;
    s=(a+b+c+d+e);
    p=(s/500.0)*100;
    cout<<"percentage is "<<p<<endl;
    if(p>=90 && p<=100)
        cout<<"Grade is A";
    else if(p>=80 && p<90)
        cout<<"Grade is B";
    else if(p>=60 && p<80)
        cout<<"Grade is C";
    else if(p<60)
        cout<<"Grade is D";            
    return 0;
}