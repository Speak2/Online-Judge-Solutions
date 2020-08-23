#include <bits/stdc++.h>
#define pi 2*acos(0.0)

using namespace std;

int main()
{
    int n,t;
    cin>>n;

    for(t=1;t<=n;t++)
    {
        double recarea,circlearea,data,radius;
        cin>>radius;
        data=radius*2;
        recarea=data*data;
        circlearea=pi*radius*radius;

        printf("Case %d: %.2lf\n",t,recarea-circlearea);
    }
    return 0;
}
