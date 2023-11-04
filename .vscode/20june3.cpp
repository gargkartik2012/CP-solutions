#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n];
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ll cnt=0,sum=0,mx=INT_MIN;
        for(ll i=0;i<n;i++)
        {
            if(a[i]<0)
            {
                cnt++;
            }
            sum +=abs(a[i]);
            mx=max(mx,a[i]);
        }
        if(cnt%2==1)
        {
            sum-=2*mx;
        }
        cout<<sum<<" "<<cnt<<endl;
    }
    return 0;
}