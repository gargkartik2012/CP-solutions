#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n;
    cin >> n;
    int count=0;
    int sum =0,sumi=0;
    vector<int> a(n);
    for(int i=0;i<n;i++){
    cin>>a[i];
     
    }
    for(int i=0;i<n;i++){
        if(a[i]%2==0){
            sum += a[i];

        }
        if(a[i]%2!=0){
            sumi += a[i];
        }

    }
    if((sumi%2==0 && sum%2==0) || (sumi%2!=0 && sum%2!=0)){
        cout<<"YES";
    }
    else{
        cout<<"NO";
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