#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n;
    cin >> n;
    int even =0;
    int odd  = 0;
    if(n%2==0){
        even += 1;
        }
    else{
        odd += 1;
    }

    if((odd %  2 )== 1){
    cout << odd <<"\n";
    }
    
    else{
    cout<< even << endl;
    }

}
signed main(){
    
    int tc = 1;
    cin>>tc; 
    while(tc--){
        solve();
    }
    return 0;
}