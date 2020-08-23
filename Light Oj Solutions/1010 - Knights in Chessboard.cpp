#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int t=1;t<=n;t++)
    {
        int one,two;
        cin>>one>>two;
        int first=min(one,two);
        int second=max(one,two);
        double third;

        if(first==3 && second==3)
            third=5;
        else if(first==1)
            third=second;
        else if(first==2)
        {
            if(second%4==1)
                third=(4*(second/4))+2;
            else
                third=4*ceil(second/4.0);
        }
        else
            third=ceil((first*second)/2.0);

        printf("Case %d: %.0lf\n",t,third);
    }
    return 0;
}
