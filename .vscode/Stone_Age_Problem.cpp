#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n,q,t,w,e,allsum=0;
    cin >> n >> q;
    vector <int> v;
    int a[n];
    for(int i=0;i<n;i++){
        //cin>>a[i];
        int x;
        cin >> x;
        v.push_back(x);
        allsum += a[i];
    }
    while(q--){
        cin>>t;
    
    if(t==1){
        cin>>w>>e;
        allsum  -= a[w-1];
        allsum += e;
        a[w-1] = e;
        
    }
    else if(t==2){
        cin>>w;
        allsum = n*w;
        v.assign(n,w);
    }
    cout << allsum <<'\n';
    }
}

signed main(){
    
    int tc = 1;
    cin>>tc; 
    while(tc--){
        solve();
        //cout << endl;
}
    return 0;
}