#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	
	while(t--){
        int sum =0;
		int n,k;
		cin>>n>>k;
        vector<int> a(n);
		for(int i=0;i<n;i++){
			cin>>a[i];
		}   
		sort(a.begin(),a.end(),greater<int>());
 
		for(int j=0;j<k;j++){
			sum += a[j];
		}
		cout<<sum*2<<endl;

	}
}