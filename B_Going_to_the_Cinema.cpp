/* #include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int &x : a)
            cin >> x;
        sort(a, a + n);
        int ans = (a[0] > 0) + 1;
        for (int i = 1; i < n; i++)
            ans += (a[i - 1] < i && a[i] > i);
        cout << ans << endl;
    }
    return 0;
} */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, fact = 1;
    cin >> n;
    if (n == 0 || n == 1)
    {
        cout << "1";
    }

    for (int i = 1; i <= n; i++)
    {

        fact = fact * i;
    }
    cout << fact;
}
