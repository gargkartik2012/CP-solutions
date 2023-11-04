/* #include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n, b;
    cin >> n >> b;
    int mn = 1e9;
    int count = 0;

    for (int i = 0; i < 100; i++)
    {
        while (n)
        {
            if (b == 1)
                continue;
            else
            {
                n = n / b;
                count++;
            }
        }
        mn = min(mn, count + i);
    }
    cout << mn << "\n";
    /*  vector<int> a(n);
     for(int i=0;i<n;i++){
     cin>>a[i];
     } 
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
} */

#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b, c, cnt = 0, mn = 1e9;
        cin >> a >> b;
        for (ll i = 0; i < 100; i++,b++)
        {
            cnt = 0;
            c = a;
            if (b == 1)
                continue;
            while (c)
            {
                c /= b;
                cnt++;
            }
            mn = min(mn, cnt + i);
        }
        cout << mn << "\n";
    }
}
 