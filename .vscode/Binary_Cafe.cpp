#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n,k;
    cin >> n >>k;
    if(log2(n)<k){
        cout<<n+1 <<'\n';
    }
    else{
        cout<< (int)pow(2,k)<< '\n';
    }
}

signed main(){
    
    int tc = 1;
    cin>>tc; 
    while(tc--){
        solve();
        
}
    return 0;
}