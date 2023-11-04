#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n;
    int count=0,flag =0,e;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
    cin>>a[i];
    }
    for(int i =0;i<n;i++){
        if(a[i]== -1){
            count++;
        }
        if(a[i] == 1){
            flag++;
        }

    }
    if(count>flag){
        e = count-flag;
        cout<<e;
    }
    else{
        cout<<0;
        
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