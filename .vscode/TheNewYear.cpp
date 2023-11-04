#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int a[3];
    for (int i=0;i<3;i++ )
    {
        cin>>a[i];
    }
    sort(a,a+3);
    int z = (a[2]-a[1]) + (a[1]-a[0]);
    cout<<z<<'\n';

    return 0;
}