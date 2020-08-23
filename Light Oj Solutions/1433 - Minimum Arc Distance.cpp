#include <bits/stdc++.h>
#define pi 3.14159265358979323846

using namespace std;


int main()
{
    int n,cases=1;
    cin>>n;

    while(n--)
    {
        double origin1,origin2,first1,first2,second1,second2,r,data;

        cin>>origin1>>origin2>>first1>>first2>>second1>>second2;

        r=pow((origin1-first1),2)+pow((origin2-first2),2);
        r=sqrt(r);
        data=pow((first1-second1),2)+pow((first2-second2),2);
        data=sqrt(data);

        double angle=acos(((2.0*r*r)-(data*data))/(2.0*r*r));
        double result=angle*r;
        printf("Case %d: %.10lf\n",cases,result);
        cases++;
    }
    return 0;
}
