#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,t=1;
    cin>>n;

    while(n--)
    {
        long long x1,x2,y1,y2;

        cin>>x1>>y1>>x2>>y2;

        long long result=__gcd(abs(x2-x1),abs(y2-y1));

        printf("Case %d: %lld\n",t++,result+1);
    }
    return 0;
}
