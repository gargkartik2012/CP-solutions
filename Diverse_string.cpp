#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n,d,count,v=0;
    cin >> n;
    string s;
    cin>>s;

    for (int i = 0; i < n; i++)
    {
        vector<int> r(10);
        d = count = 0;
        for(int j =i;j<min(i+100,n);j++){
            if(r[s[j]-'0'] == 0){
                d++;
            }
            r[s[j]-'0']++;
            for (int i= 0; i <=9; i++)
            {
               count = max(count,r[i]);
            }
            if(count<=d){
                v++;
            }
            
        }
    }
    cout<<v;
    

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