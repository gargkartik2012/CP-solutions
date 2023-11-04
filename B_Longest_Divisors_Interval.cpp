#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n;
    cin >> n;
    int count=0;
    int r=0;
    for(int i=1;i<=10000;i++){
        if(n%i==0){
            count++;
        }
        else{
           count=0;
        }
        if(count>r){
            r = count;

        }
    }
    cout<<r;
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