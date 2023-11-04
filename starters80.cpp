#include <iostream>
using namespace std;  
int main() {
   int t;
    cin>>t;
    while(t--){
        int a;
        cin>>a;
        if(a>24){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
	// your code goes here
	 
	return 0;
}

2

#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin>>t;
    
    while(t--){
        
        int a,b,c,d;
        
        cin>> a>> b>> c;
        if(b>c){
             d = (a/(b*1.0));
            cout<<ceil(d)<<endl;
        }
        else{
            a = a-c;
            d = ceil((a/(b*1.0))+1);
            cout<<d<<endl;
        }
        
    }
	// your code goes here
	return 0;
}
4
3
100 200 300
300 200 100