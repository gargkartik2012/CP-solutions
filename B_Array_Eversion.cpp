#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    int s,n,ans,a[200001];
    cin>>t;
    while(t--){
        cin>>n;
        s=0;
        int count=-1;
        ans=-1;
        for(int i=1;i<=n;i++)
        cin>>a[i];
        for(int i=n;i>=1;i--)
        if(a[i]>s){
        s=a[i];
        ans++;
        }

        cout<<ans<<endl;
         
       
    }
}