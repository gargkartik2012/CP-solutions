#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n,k;
    cin >> n >> k;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>> a[i];
    }
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++){
        a[i] -= k;
    
    if(a[i]==0){
        cout<<i+1<<endl;
    }
    }

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