#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n,i;
    cin >> n;
    int count=0;
    /*vector<int> a(n);
    for(int i=0;i<n;i++){
    cin>>a[i];
    } */
     vector<int> ls;
    for (i = 2; i*i <= n; i++)
    {

        if (n % i == 0)
        {
            count++;
            n /=i;
            ls.push_back(i);
        }
        if(count==2)
        ls.push_back(n);
       
    }
    if(count<2){
        cout<<"NO"<<endl;
    }
    else if(ls[0]==ls[2] || ls[1]==ls[2]){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
        cout<<ls[0]<<" "<<ls[1]<<" "<<ls[2]<<endl;
    }

    //sort(ls.begin(),ls.end());
    
    
   /*  for(auto it :ls){
        cout<<it<<" ";
    }  */

}

signed main(){
    
    int tc = 1;
    cin>>tc; 
    while(tc--){
        solve();
        //cout << endl;
}
    return 0;
}