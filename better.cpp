#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin >>a>> b;
        int c = 100-a;
        int d = 200 -(b*2);
        if(c<d){
            cout<<"FIRST"<<endl;
        }
        else if(d<c){
            cout<<"SECOND"<<endl;
        }
        else{
            cout<<"BOTH"<<endl;
        }
    }
    return 0;
}