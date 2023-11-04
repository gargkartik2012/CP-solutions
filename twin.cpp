#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll t;
    cin>>t;
    while (t--){
        ll n;
        cin>>n;
        vector<ll>a(n);
        ll h = n+1;
        for(ll i=0;i<n;i++){
            cin>>a[i];

        }
        for(ll i=0;i<n;i++){
            cout<<h-a[i]<<" ";

        }
        cout<<'\n';
    }
   
    
    return 0;
}