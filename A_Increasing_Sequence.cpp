#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        int m=min_element(a.begin(),a.end())-a.begin();
        int ans=a[m];
        for(int i=0;i<n;i++)
            if(i!=m)
                ans=max(ans,(a[i]-a[m]+i-m)/(i-m));
        cout<<ans<<endl;
    }
    return 0;
}

