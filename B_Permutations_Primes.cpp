#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n==1){
            cout<<"1"<<endl;

        }
        else if(n==2){
            cout<<"2 1"<<endl;

        }
        else{
            int c=4;
            vector<int> a(n,0);
            a[0]=2,a[n/2]=1,a[n-1]=3;
            for(int i=0;i<n;i++){
                if(a[i]==0){
                    a[i] = c++;
                }
            }
            for(int i=0;i<n;i++){
                cout<<a[i]<<" ";

            }
            cout<<endl;
        }

    }
}