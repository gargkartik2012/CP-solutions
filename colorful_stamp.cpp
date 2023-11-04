#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n;
    cin >> n;
    int ans=0;
    string s;
    cin>>s;
    for(int i=0;i<n;i++){
        if(s[i]!='W'){
            int black=0;
            int red=0;
            while(i<n and s[i]!='W'){
                if(s[i]=='R')
                i++;
                else{
                    i++;
                    black++;
                }

            }
            if(black==0 || red==0){
                ans++;
                break;
            }
        }
    }
    if(ans ==0){
        cout<<"YES"<<'\n';
    }
    else{
        cout<<"NO"<<endl;
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