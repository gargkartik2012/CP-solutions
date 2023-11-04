#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
  int n;
  cin >> n;
  int count =0;
   int a[n];
   
    
    for (int i = 0; i < n; i++) { 
      cin >> a[i];
      }
    
    for (int i = 0; i < n; i++) {
      if (a[i] == i+1) {
        count++; }
    }
    if(count%2==0){
    cout<<count/2;
   }
   else{
    cout<<count/2+1;
   }

}

signed main(){
  
  int tc = 1;
  cin>>tc; 
  while(tc--){
    solve();
    cout << endl;
}
  return 0;
}