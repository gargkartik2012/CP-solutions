#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int x[a];
        for(int i=0;i<a;i++)
            cin>>x[i];
            sort(x,x+a);
            cout<<x[a-b]-1<<endl;

        
        
        
        

    }
    return 0;
}