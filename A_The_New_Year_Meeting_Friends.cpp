#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> a(3);
    for(int i=0;i<3;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    cout<<abs(a[1]-a[0])+abs(a[1]-a[2]);
}