#include<bits/stdc++.h>

using namespace std;

void solve(){
    double a,b,c,d; cin>>a>>b>>c>>d;
    double p=a/b;
    double q=(1-c/d)*(1-p);
    cout<<fixed<<setprecision(12);
    cout<<p/(1-q);
}
int32_t main(){
  
    int t=1; //cin>>t;
    while(t--){
        solve();
     }

}