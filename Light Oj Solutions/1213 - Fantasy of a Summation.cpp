#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll bigmod(ll number,ll times,ll mod)
{
    if(times==0) return 1;
    ll x=bigmod(number,times/2,mod);
    x=(x*x)%mod;
    if(times%2==1)
        x*=number;

    return x%mod;
}

int main()
{
    int n,t=1;
    cin>>n;

    while(n--)
    {
        ll first,second,mod,sum=0;
        cin>>first>>second>>mod;
        int dataset[first];

        for(int i=0;i<first;i++)
        {
            cin>>dataset[i];
            sum+=dataset[i];
        }

        ll result=bigmod(first,second-1,mod)*(second%mod);
        result%=mod;
        result*=(sum%mod);
        result%=mod;

        printf("Case %d: %lld\n",t++,result);
    }
}
