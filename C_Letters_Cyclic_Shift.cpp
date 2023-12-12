#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
cin>>s;
int c=0;
for(int x=0;x<s.size();x++){
    if(s[x]!='a'){
        c++;
        s[x]=s[x]-1;
    }
    else if(c>0)break;
}
if(c==0)s.back()='z';
cout<<s;
return 0;}
