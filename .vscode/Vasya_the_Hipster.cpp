#include<bits/stdc++.h>
using namespace std;

int main (){
    int n,m;
    cin>>n>>m;
    int z1 = min(m,n);

    int z = max((n-min(n,m))/2,((m-min(n,m))/2));
    cout<<z1<<" "<<z<<'\n';
    

}


