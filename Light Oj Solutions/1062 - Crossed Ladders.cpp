#include <bits/stdc++.h>>
using namespace std;
double a,b,c;

double possible(double data)
{
    double one,two,three;

    one=sqrt((a*a)-(data*data));
    two=sqrt((b*b)-(data*data));

    three=(one*two)/(one+two);

    return three;
}

int main()
{
    int n,t=1;
    cin>>n;

    while(n--)
    {
        cin>>a>>b>>c;

        double low=0.0,high=min(a,b);

        while(high-low>0.000000001)
        {
            double mid=(low+high)/2.0;

            if(possible(mid)<=c)
                high=mid;
            else
                low=mid;
        }

        printf("Case %d: %.7lf\n",t++,low);
    }
}
