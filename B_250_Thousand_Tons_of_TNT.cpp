#include<bits/stdc++.h>
#define int long long


using namespace std;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int res=0;

        for(int k=1;k<=n/2;k++){
            if(n%k==0){
                int curr=0;
                int mini = 1e15, maxi = 0;

                for(int j = 1;j<=n;j++){
                    curr += a[j-1];
                    if(j%k==0){
                        maxi = max(maxi,curr);
                        mini = min(mini,curr);
                        curr=0;

                    }
                }
                res = max(res,maxi-mini);
            }
            
        }
        cout<<res<<endl;
    }
   

    return 0;
}
