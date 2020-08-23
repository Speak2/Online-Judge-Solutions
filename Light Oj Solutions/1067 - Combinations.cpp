#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define MOD 1000003
using namespace std;

int factorial[1000005]={0};

ll bigmod(ll n,ll b,ll mod)
{
    if(b==0) return 1;
    ll x=bigmod(n,b/2,mod)%MOD;
    x=(x*x)%mod;
    if(b%2==1)
        x=(x*n)%mod;
    return x;
}

int main()
{
    long long data=1;
    factorial[0]=1;
    for(int i=1;i<=1000000;i++)
    {
        data*=i;
        data%=MOD;
        factorial[i]=data;
    }
    int n,t=1;
    cin>>n;

    while(n--)
    {
        ll first,second,third,digit,data;
        cin>>first>>second;

        third=factorial[first-second];
        first=factorial[first];
        second=factorial[second];

        second=bigmod(second,MOD-2,MOD);
        third=bigmod(third,MOD-2,MOD);

        ll result=first;
        result=(result*second)%MOD;
        result=(result*third)%MOD;

        printf("Case %d: %lld\n",t++,result);
    }
    return 0;
}
