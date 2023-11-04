#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){

    string s1,s2;
    cin>>s1>>s2;
    for(int i=0;i<s1.length();++i)
        for(int j=0;j<s2.length();++j)
            if(s1[i]==s2[j]){
                cout<<"YES";
                return;
            }
            cout<<"NO";
            
        
    
    /* int n;
    cin >> n;
    int count=0;
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