#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    string n;
    int z=0;
    int count=0;
    cin >> n;
    for(int i=0;i<n.length();i++){
         z = (n[0]-'0')+(n[2]-'0');
    }
    cout<<z;
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