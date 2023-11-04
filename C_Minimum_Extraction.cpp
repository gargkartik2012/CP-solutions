#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 1; i <= n; i++)
    cin >> a[i]; 
    /* if(n==1){
        cout<<a[0];
    } */
    sort(a+1, a+n+1);
    int A = a[1];
    for (int i = 2; i <= n; i++){

    A = max(A, a[i] - a[i - 1]);}
    cout << A ;
    
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