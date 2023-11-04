#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n;
    cin >> n;
    int count=0;
    int r=0;
    int a,b;
   // vector<int> a(n);
    for(int i=1;i<=n;i++){
        
        cin >>a >> b;

        if(a<=10 && b>r){
            r = b;
            count = i;
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