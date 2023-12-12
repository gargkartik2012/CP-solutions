#include <bits/stdc++.h>
using namespace std;

main()
{

    int n, b, d;
    cin >> n >> b >> d;
    int x;
    int count = 0, flag = 0;

   
    for (int i = 0; i < n; i++)
    {
        cin >> x;

    if (x <= b){
        count += x;
    if (count > d){
            flag++;
            count = 0;
        }
    }
     }
    // count=0;

    cout << flag;
} 


