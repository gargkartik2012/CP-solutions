#include<bits/stdtr1c++.h>

using namespace std;

int main(){
    
   /*  for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<"*";
        }
        cout<<endl;
    }
****
****
****
**** */

/* int n;
cin>>n;
for(int i=1;i<n;i++){
    for(int j=1;j<=i;j++){
        cout<<j;
    }
    cout<<'\n';
}

1
12
123 */

/* for(int i=1;i<5;i++){
    for(int j=1;j<=i;j++){
        cout<<i;
    }
    cout<<'\n';
}

1
22
333
4444 */


/* for(int i=1;i<=5;i++){
    for(int j=5;j>=i;j--){
        cout<<"*";
    }
    cout<<'\n';
}

*****
****
***
**
* */
/* 
for(int i=1;i<=5;i++){
    for(int j=5;j>=i;j--){
        cout<<j;
    }
    cout<<'\n';
}
54321
5432
543
54
5 */

for(int i=1;i<=5;i++){
    for(int j=1;j<i+1;j++){
        cout<<"*";
    }
    cout<<'\n';
}


}
