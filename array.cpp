#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    int b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int h;
    cin>>h;
    for(int i=0;i<n;i++){
        if(a[i]==h){
            b[i] == a[i+1];
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<b[i];
    }
    
}