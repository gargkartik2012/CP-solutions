#include <bits/stdc++.h>
using namespace std;
char x[1000];
// #define int long long
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, a, q;
        cin >> n >> a >> q;
        cin >> x;
        int count = a;
        int cnt = a;
        int ans = a;

        for (int i = 0; i < q; i++)
        {
            if (x[i] == '+') count++,cnt++;
            
            else count--;
            a = max(a, count);
        }
        if (a>=n) cout << "YES" << endl;
        else if (cnt < n)
            cout << "NO\n";
        else
            cout << "MAYBE\n";
    }
    return 0;
}