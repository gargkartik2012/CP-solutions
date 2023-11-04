#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,l,c,d,p,nl,np,g,r,t;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    g = abs((k*l)/nl);
    r = abs(c*d);
    t = abs(p/np);
    cout<<min(g,min(r,t))/n<<endl;

}