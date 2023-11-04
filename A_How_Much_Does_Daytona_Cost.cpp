#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n , k;
    cin >> n >> k;
    vector <int> v(n);
   int count = 0;
    for (int i = 0 ; i < n ; i++){
        cin >> v[i];
        if (v[i] == k){
           count++;
        }
    }
    if (count>0){
        cout << "YES";
        return;
    }
    cout << "NO";
}
signed main()
{
    
    int tc=1;
    cin >> tc;
    while(tc--){
        solve();
        cout << '\n';
    }
    return 0;
}