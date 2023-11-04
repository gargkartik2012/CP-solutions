#include <bits/stdc++.h>
//#define int long long
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,b,a,cnt;
        int count = INT_MAX;
        cin >> n;
        /* int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        } */

        vector<pair<int, int>> traps;
        for (int i = 0; i < n; i++) {
            cin>>a>>b;
            traps.push_back(make_pair(a,b));
        }
        for(int j=0;j<n;j++){
            cnt = traps[j].first;
            cnt = cnt + (traps[j].second+1)/2;
            cnt--;
            count = min(count,cnt);

        }
        cout<<count<<endl;
        
    }
    return 0;
}
