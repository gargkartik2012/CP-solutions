#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int t,e;
	cin>>t;
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    e = (a*b);
	    if(to_string(e).length()==5){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}