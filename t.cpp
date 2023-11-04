#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    int a,b,c;
    cin>>a>>b>>c;
    int s = min(a,b); 
   
       a = a - s;
       b = b-s;

      int w = min(b,c);
      b = b-w;
      c = c-w;

      int r = min(c,a);
      a = a - r;
      c = c - r;

      
      if(a>0){
        cout<<"YES"<<endl;

      }
      else

      cout<<"no"<<endl;




    

   
  }
  return 0;
}