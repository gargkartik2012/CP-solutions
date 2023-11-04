#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    int a[n];
    long long int sum=0;
    for(int i=0;i<n;i++){
        cin >> a[i];
        if(i%2==0){
            sum -= a[i];
        }
        else{
            sum += a[i];
        }
    }
    if(n%2==1||sum>=0){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
    return;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}


#include<bits/stdc++.h>
 using namespace std;
 int main(){
     int tt;
     cin>>tt;
     while(tt--){
     
     int r,l,e;
     cin>>r>>l;
     int count=0;
     for(int i=r;i<=l;i++){
          e = floor(sqrt(i));
         cout<<e<<'\n';
     } 
     
     for(int i=r;i<=l;i++){
            if(i%e==0){7
                count++;
                 
            }
           
        }
        
    
         cout<<count<<endl;
         
     }
     
     
 }