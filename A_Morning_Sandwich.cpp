/* code by kartik garg*/

#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){

    /*int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }*/
    int b,c,h;
    cin >> b>>c>>h;

    if((b-1) >= (c+h)){
        cout<<((c+h)+(c+h)+1);
    }
    else{
        cout<<(b+b-1);
    }
}
/* for(int i=0;i<n;i++){
    cout<<g[i];
}*/

signed main(){
    
    int tc = 1;
    cin>>tc; 
    while(tc--){
        solve();
        cout << endl;
}
    return 0;
}