#include<bits/stdc++.h>
using namespace std;

int main(){

   /*  int x,y,z,d;
    cin>>x>>y>>z>>d;
    int t = max(x,max(y,max(z,d))); */
    int n=4;
    vector<int> a(4);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());

    cout<<a[3]-a[2]<<" "<<a[3]-a[1]<<" "<<a[3]-a[0]<<endl;
}