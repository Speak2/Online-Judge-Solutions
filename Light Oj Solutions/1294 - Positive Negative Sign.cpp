#include <bits/stdc++.h>
#define pi 2*acos(0.0)

using namespace std;

int main()
{
    int n,t;
    cin>>n;
    getchar();
    for(t=1;t<=n;t++)
    {
        long long first,second,third;
        cin>>first>>second;

        third=(first/2)*second;
        printf("Case %d: %lld\n",t,third);
    }
    return 0;
}
