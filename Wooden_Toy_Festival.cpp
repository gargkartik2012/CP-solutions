#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
    int n;
    cin >> n;
    vector<int>v(n);
    for(int i=0;i<n ;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int i= 0;
    int j = 1e9 +5;
    int mid,ans = 0;
    while(i<=j){
        mid = i+(j-i)/2;
        int k,l=0,cou =0;
        for(k=0;k<n;k++){
            if(v[k]-v[l]>2*mid){
                l=k;
                cou++;

            }
        }

        if(cou>=3){
            i = mid+1;

        }else{
            ans = mid;
            j = mid-1;

        }
        cout<<ans;
    }

}

    return 0;
}