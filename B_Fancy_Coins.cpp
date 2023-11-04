#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int m,k,a1,ak;
    cin >> m >> k >> a1 >> ak;
    int count=0;
    /* vector<int> a(n);
    for(int i=0;i<n;i++){
    cin>>a[i];
    } */

    if(a1>=m  || (ak*k) >=m){
        cout<< "0"<<endl;
    }
    if(a1<m){
        m = m-a1- (ak*k);
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