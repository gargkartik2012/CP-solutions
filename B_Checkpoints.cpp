/* #include<bits/stdc++.h>
using namespace std;

int main(){
    int n,a,x;
    cin>>n>>a;
    int sum=0;
    int s[n-1];

    for (int i = 0; i < n; i++)
    {
        cin>>x;

        s[i] = abs(x-a);
        

    }
    sort(s,s+n);

    for (int i = 0; i < n-1; i++)
    {
        sum += s[i];
       
    }
    cout<<sum<<endl;
    


    
} */
#include <bits/stdc++.h>
using namespace std;
main(){
int n,pos;
cin>>n>>pos;
int a[n];
for(auto&i:a)cin>>i;
sort(a,a+n);
cout<<(n==1?0:min({abs(a[n-1]-pos)+abs(a[n-1]-a[1]),abs(a[0]-pos)+abs(a[0]-a[n-2]),abs(a[1]-pos)+abs(a[n-1]-a[1]),abs(a[n-2]-pos)+abs(a[0]-a[n-2])}));
}
