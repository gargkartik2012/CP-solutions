#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,n1;
    cin>>n>>n1;
    int n2,n3;
    cin>>n2>>n3;

    int x = n * 60;
    int y = n2 * 60 ;
    int e = abs(x+y)/2;
    int w = abs(n1+n3)/2;
    
    
    // You need to separate the hours and minutes with a colon
    cout<<setprecision(2)<<e/60<<":"<<w;

    return 0;
}
