#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin>>s;
    int r = s.size();
    int count =0;
    for(int i=0;i<r;i++){
        int e = 0;
        for(int j =0;j<r;j++){
            if(i==j){
                e += (s[j] - 'A' + 1);
            }
            else if(j>i && s[j]>i) {
                e -= (s[i] - 'A' +1);

            }
            else{
                e += (s[j] -'A' +1);

            }
        }
        count = max(count,e);

    }
    cout<<count<<'\n';

}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}