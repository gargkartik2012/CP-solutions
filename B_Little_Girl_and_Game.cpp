#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    string s;
    cin>>s;
    string r = s;
    reverse(s.begin(), s.end());
    if(r==s){
        cout<<"First"<<endl;
    }
    else{
        cout<<"Second"<<endl;
    }

 
    return 0;
}