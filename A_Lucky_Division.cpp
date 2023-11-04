#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,h;
    cin>>n;
    bool a = true;
    while(n){
        h = n%10;
        n = n/10;

        if(n!=4 || n!= 7){
            a = false;
        }
        if(n%4==0 || n%7==0){
            a = true;
        }
    }
    if(a==true){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}