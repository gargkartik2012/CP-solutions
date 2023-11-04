#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n,x;
    cin >> n;
    int count =0;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        x = a[i]+a[i];
        if(x == n-1){
            count++;
        }
        else{
            continue;
        }
    }
   cout<<count;
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