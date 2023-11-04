#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    if(a+b+c == n){
        cout<<"3"<<endl;
        
        
    }
    else if(a+b == n ||b+c == n ||a+c == n){
        cout<<"2"<<endl;
        
    }
    
    else if(n==a||n==b||n==c){
        cout<<"1"<<endl;
        
    }
    else if(n>(a+b+c) &&(a==1||b==1||c==1)){
        cout<<n<<endl;
    }

}
    


