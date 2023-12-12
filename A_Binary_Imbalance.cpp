#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
    cin>>n;
    string s;
    cin>>s;

    int flag =0,count =0;

    for(int i=0;i<n;i++){
        if(s[i] =='1'){
            count++;
        }
        else{
            flag++;
        }

    }
    if(flag>count){
        cout<<"YES"<<endl;
    }
    else{
        if(flag==0)
        cout<<"NO"<<endl;

        else{
            cout<<"YES"<<endl;
        }
    }
    
    }
    
    }