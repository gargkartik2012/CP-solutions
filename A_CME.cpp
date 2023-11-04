#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n;
    cin >> n;

    if(n==2){
        cout<<"2";
    }
    else{
        cout<<n%2;
    }
    /* int count=0;
    vector<int> a(n);
    for(int i=0;i<n;i++){
    cin>>a[i];
} */

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