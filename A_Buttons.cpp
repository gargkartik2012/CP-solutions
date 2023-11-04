#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int a,b,c,r;
        cin>> a>> b>> c;
       /*  a += c/2;
        b +=c/2; */

        if(c%2==1){
            a++;
        
        }

        if(a>b){
            cout<<"First"<<endl;
        }
        else if(b>=a){
            cout<<"Second"<<endl;
        }
        
    }
}