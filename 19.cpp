 // WAP to print Armstrong numbers from 1 to 100.

 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {
    int r,s=0,t;
    for(int i=1;i<100;i++)
    {
        s=0;
        t=i;
        for(int j=1;t>0;j++)
        {
        r=t%10;
        s+=(r*r*r);
        t/=10;
        }
        if(s==i)
         {   
            cout<<s<<" ";
         }
    }
    return 0;
 }