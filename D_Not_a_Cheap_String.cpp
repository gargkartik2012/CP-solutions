#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    string s;
    cin>>s;
    int n;
    int a[n];
    cin >> n;
    for(int i=97;i<122;i++){
        for(char j=1;j<26;j++){
            a[i] = a[j];
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