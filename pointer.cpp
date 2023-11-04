#include<bits/stdc++.h>
#define int long long

using namespace std;

/*vanya and france 
signed main(){
    int n,h;
    int count =0;
    cin>>n>>h;
    vector<int> a(n);
    for(int i=1;i<=n;i++){
        cin>>a[i];
        if(a[i]>h){
            count += 2;
            
        }
        else{
            count += 1;
        }
        
    }
    cout<<count<<endl;
    }
*/

    



/*signed main(){
    int n,i;
    cin>>n;
    vector<int> a(n);
    for( i=1;i<=n;i++){
        cin>>a[i];
    }
    for( i=1;i<=n;i++){
        if(a[i]!=a[i+1]){
            break;

        }
    }
    cout<<i+1<<endl;
    return 0;
}*/

//George and Accommodation

/*signed main(){
    int n;
    int count =0;
    cin>>n;
    vector<int>a(n),b(n);
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
    }
    for(int i = 0;i<n;i++){
        if(b[i]-a[i]>=2){
            count ++;
        }
    }
    cout<<count<<'\n';

}*/

//In Search of an Easy Problem

signed main(){
    int n;
    cin>>n;
    int count =0;
    vector<int>a(n);
    for(int i=1;i<=n;i++){
        cin>>a[i];

        if(a[i]== 1){
            count++;
        }
    }
    if(count>0){
        cout<<"HARD"<<'\n';
    }
    else
    cout<<"EASY"<<endl;
}