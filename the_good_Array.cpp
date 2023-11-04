#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n,k;
        cin>>n>>k;

        int e = n;
        for(int i=0;i<=n;i++){
            int y= (i+k-2)/k;
            int r = (n-i+k-1)/k;
            e = min(e,y+r);
// /*  */
        }
        cout<<e+1<<'\n';
    }
}