#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
	int t;
	cin>>t;
	int count=0;
	while(t--){
		int n,z;
		cin>>n;
        int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n;i++){
			 z = a[i]*a[i+1]*a[i+2];
		}
		for(int i=2;i<z/2;i++){
			if(z%i==0){
				count=0;
			}
			else{
				count++;
			}
		
		}
		cout<<count<<endl;

	}
}