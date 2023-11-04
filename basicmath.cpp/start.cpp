#include <bits/stdtr1c++.h>
using namespace std;

int main(){


 // recursion 

   /*  print name 5 /n times
    print linearly from 1 to n
    print from n to 1
    print from 1 to n (but by backtracking)
    print from n to 1 (by bractracking) */
/* 
int64_t printi(int i,n){
    if(i>n){
        return;

    }
    print("raj");
    printi(i+1,n);

    
}

int main()
{
    int n;
    cin>>n;

    printi(1,n); */


   







    /* int n, r;
    cin >> n;
    int sum = 0, isum = 0;
    vector<int> a(n);

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    for (int i = 0; i < n; i++)
    {
        isum += a[i];
    }
    cout << isum - sum << endl; */

    /* while (n!=1){
        if(n%2==0){
            n=n/2;
            cout<<n<<" ";
           
        }
        else{
            n = n*3+1;
            cout<<n<<" ";
           
        }
    
    } */
    

    /* int n;
    cin>>n;
    int cnt=0;
    for(int i=1;i*i<n;i++){
        if(n%i==0){
            cnt++;
            if(n%i!=i)
            cnt++;
        }
    }
    if(cnt==2){
        cout<<"prime";

    }
    else{
        cout<<"not prine";
    } */

    // GCD OF TWO NUMBERS
    /* int n1,n2;
    cin >> n1>>n2;
    int sum = 0;

    int gcd =1;
    for(int i=1;i<=min(n1,n2);i++){
        if(n1%i==0 && n2%i==0)
        gcd =i;
    }
    cout<<(gcd); */


    // FACTORS OF ANY NUMBER

    /* vector<int> ls;
    for (int i = 1; i <= n; i++)
    {

        if (n % i == 0)
        {
            ls.push_back(i);
        }
    }
    sort(ls.begin(),ls.end());
    for(auto it :ls){
        cout<<it<<" ";
    } */



    /* while(n>0){
        r = n%10;
        count++;
        n = n/10;
    } */

    // Way to count the number of digits
    // count = (int)log10(n) +1;

    // ReVErse
    /* while(n>0){
     r = n%10;
     sum = sum*10 + r;
     n = n/10;

    if(sum==n){
     cout<<"yes"<<endl;
    }
    } */

    // EUCLIDEAN algorithm for gcd 
    // time complexity o(log@min(a,b))

    /* while(a>0 and b>0){
        if(a>b)
        a = a%b;
        else
        b = b%a;
    }
    if(a==0){
        cout<<b;
    }
    else{
        cout<<a;
    }
 */

// hashing

// counting the number occurs in the array

/* int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
    cin>>arr[i];

}
// precomputation
int hash[13] ={0};
for(int i=0;i<n;i++){
    hash[arr[i]]++;

}
int q;
cin>>q;
while(q--){

int number;
cin>>number;
//  fetch
cout<<hash[number];
}
 */
// counting the number of character

string s;
cin>>s;

int hash[26] ={0};
for (int i = 0; i < s.size(); i++)
{
    hash[s[i]]++;
}

int q;
cin>>q;
while(q--){
    char g;
    cin>>g;
    cout<< hash[g-'a'];

}





return 0;
}
