#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n;
    cin >> n;
    int sum =0;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum += a[i];
    }
    if(sum/2){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
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