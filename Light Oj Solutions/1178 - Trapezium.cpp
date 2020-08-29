#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,t=1;
    cin>>n;

    while(n--)
    {
        double a,b,c,d;
        cin>>a>>b>>c>>d;

        double base=a-c,s=(base+b+d)/2.0,area;

        area=sqrt(s*(s-base)*(s-b)*(s-d));

        double height=(area*2)/base;

        double sesh=(height*(a+c))/2.0;

        printf("Case %d: %.8lf\n",t++,abs(sesh));
    }
    return 0;
}
