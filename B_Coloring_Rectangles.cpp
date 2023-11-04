#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n, m;
    int count = 0;
    cin >> n >> m;
    if ((n * m) % 3 == 0)
    {
        cout << (n * m) / 3;
    }
    else
        cout << ((n * m) / 3) + 1;
}

signed main()
{

    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        solve();
        cout << endl;
    }
    return 0;
}