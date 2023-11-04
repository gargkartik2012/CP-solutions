#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
    int k,i,s=-1;
    cin>>k;
    string ss="";
    for(i=1;i<=k;i++)
    {
        ss+=to_string(i);

    }
    cout<<ss[k-1]<<endl;
}