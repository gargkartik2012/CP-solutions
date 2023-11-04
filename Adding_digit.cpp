#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int a,b,n;
    cin >> a >> b >> n;
    int flag =0;
    for(int i=0;i<=9;i++){
        if(( a * 10 + i) % b == 0){
            cout<< a*10 + i;
            for(int i=0;i<n-1;i++){
                cout<<"0";
            }
            flag = 1;
            break;  
        }
    }
    if(flag==0){
        cout<<"-1";
    }
    
    
    return 0;
}
