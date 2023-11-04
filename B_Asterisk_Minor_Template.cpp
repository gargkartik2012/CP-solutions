#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
   string a,b;
   cin>>a>>b;
   int a1 = a.length();
   int b1 = b.length();
   if(a[0]==b[0]){
    cout<<"YES\n"<<a[0]<<"*"<<endl;
    return;
   }
   if(a[a1-1]==b[b1-1]){
    cout<<"YES\n"<<"*"<<a[a1-1]<<endl;
    return;
   }
   for(int i=0;i<a1;i++){
    for(int j=0;j<b1-1;j++)
    if(a[i]==b[j] && a[i+1]==b[j+1]){
        cout<<"YES\n*"<<a[i]<<a[i+1]<<"*"<<endl;
        return;
    }
   }
   cout<<"NO"<<endl;

}

signed main(){
    
    int tc = 1;
    cin>>tc; 
    while(tc--){
        solve();
        
}
    return 0;
}