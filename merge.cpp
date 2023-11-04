#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll t;
    cin>>t;
    ll count =0;
    while(t--){
        ll n;
        cin>>n;
        vector<ll>a(n),b(n);
        for(ll i=0;i<n;i++){
            cin>>a[i]>>b[i];
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        if(n==1){
            cout<<"2"<<endl;
        }
        for(ll i=1;i<=n;i++){
            if(a ==b){
                count++;
                
            }
            else{
                count=0;
            }

        }
        if(count>0){
            cout<<n<<"\n";
        }
        else{
            cout<<"1"<<endl;

        }
    }
   
}