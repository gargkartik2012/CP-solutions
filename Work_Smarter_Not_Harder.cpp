#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    float t,r,r1;
    cin>>t;
    while(t--){
        float n,a,b;
	    cin>>n>>a>>b;
        r = ceil(n/b);
        r1 = ceil(n/a);
        //cout<<r<<r1<<endl;
       // cout<<ceil(3.3333);
         if(r==r1){
            cout<<"-1"<<endl;
        }
        else{
            cout<<abs(r-r1+1)<<endl;
        } 
 

	    
    }
	
	
	return 0;
}
