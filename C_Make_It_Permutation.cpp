#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n,c,d;
    cin >> n>>c>>d ;
    int count=0;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
    cin>>a[i];
    }
    sort(a.begin(),a.end());

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