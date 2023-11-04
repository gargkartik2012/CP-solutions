#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,g,r,l;
    cin>>t;
    int sum =0;
    while (t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i = 0 ;i<=n;i++){
            cin>>a[i];
            sum = sum + a[i];
            r = a[i];
            l = a[i+1];
            g = r-l+1;
        }

        if(sum%g==0){
            cout<<"-1"<<endl;
        }
        else{
            for(int i=1 ;i<n ;i++){
                cout<<i<<endl;
            }
        }

    }

        
   return 0; 
}