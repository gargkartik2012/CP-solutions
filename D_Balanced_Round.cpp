#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n,k;
    int count=1,ans = 1;
    cin >> n >> k;
    int a[n];
    for(int i=0;i<n;i++){
    cin>>a[i];
    }
    sort(a,a+n);
    for(int i=1;i<n;i++){
        if((a[i] - a[i-1] ) <= k ){
            count++;
        }
        else count=1;
        ans = max(ans,count);
    }
    cout<<n-ans;
}

signed main(){
    
    int tc = 1;
    cin>>tc; 
    while(tc--){
        solve();
        cout << endl;
}
    return 0;
}
