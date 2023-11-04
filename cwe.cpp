#include <bits/stdc++.h>
#define int long long

using namespace std;

signed main()
{
    int t;
    cin>>t;
    int sum = 0;
    while(t--){
        int n,m;
        int a[n],b[m];
        cin>>n>>m;
        for(int i=0;i<n;i++) cin>>a[i];
       
        for(int i=0;i<m;i++) cin>>b[i];
        for(int i=0;i<m;i++){
        sort(a,a+n);
        a[0]= b[i];
        }
        long long sum =0;
        cout<<accumulate(a, a+n, sum)<<endl;
        
    }
    

    return 0;
}
