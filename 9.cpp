// whether a given year is a leap year or not.
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int y;
    cout << "Enter a year" << endl;
    cin >> y;
    if (y % 4 == 0 || y % 4 == 0 && y % 100 != 0)
        cout << y << " is a leap year";
    else
        cout<<y<<" is not a leap year";
     return 0;
}