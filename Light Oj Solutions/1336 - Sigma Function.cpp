#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,t=1;
    cin>>n;

    while(n--)
    {
        long long number,ans;
        cin>>number;

        ans=sqrt(number);
        ans+=sqrt(number/2);

        printf("Case %d: %lld\n",t++,number-ans);
    }
    return 0;
}
