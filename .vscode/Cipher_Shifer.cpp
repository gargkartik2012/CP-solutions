#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n;
    cin >> n;
    string s,s1="";
    cin>>s;
    for(int i=0;i<n;i++){
        s1 += s[i];

        for(int j= i+1;j<n;j++){
            if(s[j]==s[i]){
                i=j;
                break;
            }

        }

    }
    cout<<s1<<'\n';
}

signed main(){
    
    int tc = 1;
    cin>>tc; 
    while(tc--){
        solve();
       
}
    return 0;
}