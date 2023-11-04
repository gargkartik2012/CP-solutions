#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n,m;
    cin >> n >> m;
    if((n % m )==0){
        cout<<"NO";
    }
    else{
        cout<<"YES";
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