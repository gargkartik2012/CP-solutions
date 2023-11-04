#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{
    string s;
    cin >> s;
    int sum = 0, count = 0, b = 0, y;
    for (int i = 0; i < s.length(); i++)
    {
        y = s[i];

        if (y % 2 == 0)
        {
            count++;
        }
        if (s[i] == '0')
            b++;

        else
            sum += (y);
    }
    if (sum % 3==0 && b >= 1 && count >= 2)
    {
        cout << "red" << endl;
    }
    else
    {
        cout << "cyan" << endl;
    }

    /*  int n,h,d;
     cin>>n;
     int sum=0;
     while(n>0){
         h = n%10;
         d =h;
         sum += h;
         n = n/10;
     }
     //cout<<sum<<endl;
    if(sum%3==0 && d==0 && d%2==0){
     cout<<"red"<<endl;

    }
    else{
     cout<<"cyan"<<endl;
    }
 }
  */
}
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}