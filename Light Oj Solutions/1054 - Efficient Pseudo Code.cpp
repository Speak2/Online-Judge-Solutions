#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define check(a) (dataset[a>>6] & (1<<((a>>1)&31)))
#define sett(a) (dataset[a>>6] | (1<<((a>>1)&31)))
#define ll unsigned long long
#define hobe 47000
#define length 4851
#define MOD 1000000007
using namespace std;

int prime[length];
int dataset[hobe/64];

void seive()
{
    for(int i=3;i*i<=hobe;i+=2)
        if(!check(i))
            for(int j=i*i;j<=hobe;j+=i*2)
                dataset[j>>6]=sett(j);
    prime[0]=2;
    int x=1;
    for(int i=3;i<hobe;i+=2)
        if(!check(i))
            prime[x++]=i;
}
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
    seive();
    ll n,t=1;
    ll first,second;
    cin>>n;

    while(n--)
    {
        cin>>first>>second;
        ll result=1,data=first;

        for(int i=0;i<length && prime[i]<=sqrt(first);i++)
        {
            int times=0;
            while(first%prime[i]==0)
            {
                times++;
                first/=prime[i];
            }
            if(times>0)
            {
                ll number=bigmod(prime[i],(times*second)+1,MOD)-1;
                ll second=bigmod(prime[i]-1,MOD-2,MOD);
                result*=((number*second)%MOD);
                result%=MOD;
            }
        }
        if(first!=1)
        {
            ll number=bigmod(first,second+1,MOD)-1;
            ll second=bigmod(first-1,MOD-2,MOD);
            result*=((number*second)%MOD);
            result%=MOD;
        }
        if(data==MOD)
            result=1;

        printf("Case %d: %u\n",t++,result);
    }
    return 0;
}
