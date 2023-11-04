#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,ans=1e9;
	cin>>n;
	while(n--){
		int x;
		cin>>x;
		ans=min(ans,abs(x));
	}
	cout<<ans<<endl;
	return 0;
} 