#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n;
    cin >> n;
    int count =0;
    vector<int> a(n);
    for (int i = 0; i < n; i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]== 0){
            a[i] +=1;
            count++;
        }
        else{
            count=0;
            continue;

        }
    }
    cout<<count<<endl;
   
    
}

signed main(){
    solve();
    /*int tc = 1;
    cin>>tc; 
    while(tc--){
        solve();
        cout << endl;
}*/
    return 0;
}