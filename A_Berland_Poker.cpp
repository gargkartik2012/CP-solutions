#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,m,k,u,e,f;
        cin>>n>>m>>k;

        u = n/k;
        if(u>=m){
            cout<<m<<endl;
        }
        else{
            e = m-u;
            f = ceil(1.0*e/(k-1));
            cout<< u-f <<endl;

        }



    }

return 0;
}


