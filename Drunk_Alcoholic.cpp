#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
	int t,e;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
        e = (n/2)*3;
	    if(n%2==0){
	        
	        cout<<e-(n/2)<<'\n';
	    }
	    else{
	        cout<<e-(n/2)+3<<'\n';
	    }
	}
	return 0;
}
