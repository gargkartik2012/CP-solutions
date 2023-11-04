#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>> t;
    while (t--)
    {
        int a,b;
        cin>>a>>b;
        int x[a];
        for(int i=0;i<a;i++){
            cin>>x[i];
        }
        for(int i=0;i<a;i++){
            if(b>=x[i]){
                cout << "1" <<endl;
                b = b-x[i];
               
               
            }
            else{
                cout<<"0"<<endl;
               
                }
                
        
        
    }
    
    
    return 0;
}