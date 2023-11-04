#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int count=0;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];

            if((a[i]+a[i+1] == a[i+2]) || (a[i]==a[i+1])){
                count++;
            }
            else{
                count=0;
            }
        }
        if (count>0){
            cout<<"Yes"<<"\n";
        }
        else{
            cout<<"No"<<"\n";
        }


    }
}