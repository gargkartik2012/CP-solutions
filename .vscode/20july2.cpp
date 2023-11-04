#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n;
    cin >> n;

    int a[n];
    for(auto &s :a){
        cin>>s;

    }
    sort(a,a+n);
    int flag =0;
    for(int i=0;i<n/2;i++){
        flag += abs(a[i] - a[n -i -1]);
    }
    cout<<flag;

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