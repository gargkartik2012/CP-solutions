#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n;
    cin >> n;
    int a[n],b[n];
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=n;i++) cin>>b[i];
    
    bool flag = 0;
    for(int i=1;i<=n;i++){
        if(a[i]>b[i]||(b[i]-b[i%n+1]>=2&&a[i]!=b[i]))	 flag=1;
	}
	if(flag==1) 
	cout<<"NO"<<endl;
    else
    cout<<"YES"<<endl;
	
}

signed main(){
    
    int tc=1;
    cin>>tc; 
    while(tc--){
        solve();
       // cout << endl;
}
    return 0;
}