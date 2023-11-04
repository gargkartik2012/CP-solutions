#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,res=0;
        cin>>n;
        vector<int> v(n+1,0),pos(n+1,0);
        for(int i=1;i<=n;i++){
            cin>>v[i];
            pos[v[i]]=i;
            
        }
        for(int i=2;i<=n;i++){
            if(pos[i-1]>pos[i]){
                res++;
            }
        }
        cout<<res<<endl;
    }
}