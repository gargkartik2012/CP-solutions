#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a1;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            a1.push_back(a);
        }
        sort(a1.begin(),a1.end());
        a1[0] +=1;
        int ans =1;
        for(int i=0;i<n;i++){
            ans *= a1[i];
        }
        cout<<ans<<endl;
    }
}