#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define hobe 10000000
#define length 664579
#define check(a) (dataset[a>>6] & (1<<((a>>1)&31)))
#define sett(a) (dataset[a>>6] | (1<<((a>>1)&31)))
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

int main()
{
    seive();
    int n,t=1;
    cin>>n;

    while(n--)
    {
        ll number,hishab=1;
        cin>>number;

        for(int i=0;i<length && prime[i]<=sqrt(number);i++)
        {
            int times=0;
            while(number%prime[i]==0)
            {
                number/=prime[i];
                times++;
            }
            if(times>0)
                hishab*=(2*times)+1;
        }
        if(number>1)
            hishab*=3;
        hishab++;

        printf("Case %d: %lld\n",t++,hishab/2);
    }
}
