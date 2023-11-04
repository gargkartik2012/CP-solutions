/* #include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m,h=0;
		cin>>n>>m;
        int ans=0;
		int a[i];
		int a[j];
		for(int i=0;i<n;i++){
			for(int j = 0;j<m;j++){
				cin>>a[i][j];
			}
		}
		for(int i=0;i<n;i++){
			for(int j =0;j<m;j++){
				if(a[i][j] =='#' and a[i+1][j+1]=='#')
				{
					ans++;
				}
			}

		}
		cout<<max(ans,h);
	}
} */

#include<bits/stdc++.h>
 using namespace std;
 int main(){
	int n,y;
	cin>>n;
	int count =0;
for(int i=3;i<n;i+2){
		y = n % i;       
		count++;
	}
	cout<<count;
	
 }