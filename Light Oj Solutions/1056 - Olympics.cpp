#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,t=1;
    cin>>n;

    while(n--)
    {
        int one,two;
        scanf("%d : %d",&one,&two);

        double length,width,radius,next,degree,arc,data,first,second;

        length=(400.0/(2*(one+two)))*one;
        width=(400.0/(2*(one+two)))*two;


        radius=sqrt(length*length+width*width)/2.0;
        next=radius*radius*2;

        degree=acos((next-(width*width))/next);
        arc=degree*radius;

        data=400.0/(2*(length+arc));

        first=data*length;
        second=data*width;

        printf("Case %d: %.8lf %.8lf\n",t++,first,second);
    }
    return 0;
}
