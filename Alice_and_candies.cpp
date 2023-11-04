#include<bits/stdc++.h>
 using namespace std;
 int main(){
	int n,y;
	cin>>n;
    int count=0;
		for(int i=1;i<n;i++){
			y = n % i+2;
			count++;
		}
		cout<<count;
	
 }