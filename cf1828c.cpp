#include<bits/stdc++.h>
#define ull unsigned long long
#define ll long long

using namespace std;

vector<int >a[10001];
bool d[1001][10001];
int color[10001];
const int Max = 105;
const int MOD = 1e9+7;
ull t;

int main(){
    ll t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll>a(n),b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        
        ll j =0,ans =1;
        for(ll i=0;i<n;i++){
            while(j<n && a[i] <= b[j])
            j++;
            ans = (ans*(i-j+1LL)) % MOD;
        }
        cout<<ans<<endl;
       
        

    }
    return 0;
}