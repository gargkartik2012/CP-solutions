#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n,w,h;
    int count=0;
    int min=INT_MAX,max=0;

    int diff;
    cin >> n >>w >> h;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin>> a[i];
    }
    for(int i=0;i<n;i++){
        cin>> b[i];
    }
    for(int i=0;i<n;i++){
       
        if(a[0]/2<=b[0]){
            count++;
        }
        else if(a[i]/2>=b[i]){
            count=0;
        }
    }
    
    if(count>=1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }


    /*for(int i=0;i<n;i++){
       diff=a[i]-b[i];
       if(diff<min)
    	{
    		min=diff;
    	}
    	if(diff>max)
    	{
    		max=diff;
    	}
    }

    if(max-min > 2*(w-h))
    {
    	cout<<"NO\n";
    }
    else
    {
		cout<<"YES\n";
    }
    
    if(count>=1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }*/

}
signed main(){
    
    int tc = 1;
    cin>>tc; 
    while(tc--){
        solve();
        
}
    return 0;
}