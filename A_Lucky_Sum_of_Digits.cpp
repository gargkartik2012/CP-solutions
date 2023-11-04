#include<iostream>
using namespace std;
int  main()
{
    int sum,a,b,i,j;
    cin>>sum;
    while(sum)   {
        a=b=0;
        while(sum>0)
        {

            if(sum%7==0)
            {
                b++;
                sum-=7;
            }
            else if(sum%4==0)
            {
                a++;
                sum-=4;
            }
            else
            {
                a++;
                sum-=4;
            }
        }
        if (sum < 0)
        {
            printf("-1\n");
            break;
        }

        for (int i=0; i<a; i++)
            printf("4");

        for (int i=0; i<b; i++)
            printf("7");

        cout<<endl;

    }
}
