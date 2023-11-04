#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        
        if(a==1){
            if(b==1){
                cout<<0<<endl;
            }
            else{
                cout<<1<<endl;
            }
        }
        else{
            if(c==1){
                cout<<1<<endl;
            }
            else{
                cout<<0<<endl;
            }
        }
    }
    return 0;
}