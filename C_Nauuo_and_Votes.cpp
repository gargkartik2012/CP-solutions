#include <bits/stdc++.h>
#define int long long

using namespace std;

signed main()
{
    int x, y, z;
    cin >> x >> y >> z;

    if (x > y && z < x - y)
    {
        cout << "+" << endl;
    }
    else if (y > x && z < y - x)
    {
        cout << "-" << endl;
    }
    else if ((x > y && z >= x - y) || (y > x && z >= y - x) || (x == y && z> 0))
    {
        cout << "?" << endl;
    }
    else if (x ==y && z == 0)
    {
        cout << "0" << endl;
    }
}
