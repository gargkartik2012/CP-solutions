#include <bits/stdc++.h>
using namespace std;

int main()
{
     int t;
     cin >> t;
     while (t--)
    {

    int x, y, z;
    cin >> x >> y >> z;

    if (x>=y)
    {
         cout << x<<endl;
    }
    
    else {
        cout << (y + max(y - x - z, 0))<<endl;
    }
    
}
}
