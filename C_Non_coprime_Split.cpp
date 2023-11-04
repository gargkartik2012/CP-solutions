#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {

    int n;
    cin>>n;
    int a[n];
    int g;
    cin>>g;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]+a[i+1]== g){
            cout<<i<<" "<<i+1;
        }
    }
   /*  int t;
    cin >> t;

    while (t--) {
        int l, r;
        cin >> l >> r;

        if ( r < 4 ||l==r) {
            cout <<"-1"<< endl;
        }
       
        /* if(r%2==0){
            cout<<"2"<<" "<<r-2<<endl;
        } 
        else{
            cout<<"2"<<" "<<r-3<<endl;
        }
            
        
    } */

    return 0;
}
