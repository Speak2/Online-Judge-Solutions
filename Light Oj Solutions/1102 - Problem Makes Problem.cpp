#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll facts[2000005]={0};

ll bigmod(ll number,ll data)
{
    if(data==0) return 1;
    ll x=bigmod(number,data/2)%MOD;
    x*=x;
    x%=MOD;
    if(data%2==1) x*=number;
    return x%MOD;
}
int main()
{
    facts[0]=1;
    for(int i=1;i<=2000005;i++)
        facts[i]=(facts[i-1]*i)%MOD;
   // freopen("mytxt.txt","w",stdout);
    int n,t=1;
    cin>>n;

    while(n--)
    {
        int first,second;
        cin>>first>>second;
        ll result=facts[first+second-1];
        result*=bigmod(facts[first],MOD-2);
        result%=MOD;
        result*=bigmod(facts[second-1],MOD-2);
        result%=MOD;

        printf("Case %d: %lld\n",t++,result);
    }
}
