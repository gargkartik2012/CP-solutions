#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
    int flag =0;
	int count=0,ans=n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];

	}
	for(int i=0;i<n;i++){
		if(a[i]==a[i+1]){
			count = a[i];
            flag =1;
		}
		

	}
    if(flag>=1){
        cout<<max(count,1)<<endl;
    }
    else{
        cout<<n<<endl;
    }
}



	/* int z = max(count,ans);
    cout<<z<<'\n';
  } */
