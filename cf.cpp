#include<bits/stdc++.h>
using namespace std;

int main(){
    int t ;
    cin>>t;
    while(t--){
       int n;
       cin>>n;
       int a[n];
       for(int i = 0;i<n;i++){
        cin>>a[i];
       


        if(a[i]==a[i+1]){
          
            cout<<"NO"<<endl;
            break;
        }
        else{
            cout<<"YES"<<endl;
            break;
        }
       }
       
    }
    return 0;
}