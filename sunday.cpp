#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        string s;
        cin>>s;
        int k;
        cin>>k;
        ll q[k]  ={0};
        char ch;
        for(int i=0;i<k;i++){
            cin>>ch;
            q[ch]++;

        }
         int r=0,v =0;
         for(int i=0;i<n;i++){
            if(q[s[i]] >0){
                if(r>v) v =r;
                    r=0;
            }
            r++;
         }
         cout<<v<<'\n';
 
    }
   
    
    return 0;
}
//write a code to chek it is palindrome or not?
