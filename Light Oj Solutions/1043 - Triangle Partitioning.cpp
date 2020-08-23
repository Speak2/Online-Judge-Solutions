#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,t=1;
    cin>>n;

    while(n--)
    {
        double a,b,c,ab;
        cin>>a>>b>>c>>ab;

        double result=sqrt(ab/(ab+1))*a;

        printf("Case %d: %.8lf\n",t++,result);
    }
    return 0;
}
