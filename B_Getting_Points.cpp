#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll t;
    cin >> t;

    while(t--){
        ll n, point, lesson, task;
        cin >> n >> point >> lesson >> task;

        if(n < 8){
            ll one_day_point = task + lesson;
            if(one_day_point >= point) 
                cout << n - 1 << endl;
            else{
                ll diff = point - one_day_point;
                cout << n - (diff / lesson + 1) << endl;
            }
        } else {
            ll total_tasks = (n - 1) / 7;  // Number of full weeks excluding the first week
            ll point_gain = total_tasks * (lesson + 2 * task);
            ll remaining_days = n - total_tasks * 7;

            ll diff = point - point_gain;
            ll full_weeks_needed = max(0LL, (diff + lesson - 1) / lesson);
            
            cout << n - total_tasks - min(remaining_days, full_weeks_needed + 1) << endl;
        }
    }

    return 0;
}
