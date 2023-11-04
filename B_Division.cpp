#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int rating;
    int count=0;
    cin >> rating;
   /* vector<int> a(n);
    for(int i=0;i<n;i++){
    cin>>a[i];
}*/
if( rating>=1900){
    cout<<"Division 1";
}
 else if(rating>=1600 && rating<=1899){
    cout<<"Division 2";
}
 else if(rating>=1400 && rating<=1599){
    cout<<"Division 3";
}
 else if(rating<=1399){
    cout<<"Division 4";
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