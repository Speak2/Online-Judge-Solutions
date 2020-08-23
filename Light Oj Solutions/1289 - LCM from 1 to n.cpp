#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define hobe 100000000
#define check(n,a) (n & (1<<((a>>1)&31)))
#define sett(n,a) (n | (1<<((a>>1)&31)))
#define ul unsigned
#define length 5761455

using namespace std;

ul prime[length];
int dataset[hobe/64];
ul store[length];
int x,i,j;

void seive()
{
    for(i=3;i*i<=hobe;i+=2)
        if(!check(dataset[i>>6],i))
            for(j=i*i;j<=hobe;j+=i*2)
                dataset[j>>6]=sett(dataset[j>>6],j);
    x=1;
    prime[0]=2;
    for(i=3;i<hobe;i+=2)
        if(!check(dataset[i>>6],i))
            prime[x++]=i;
}
void calc()
{
    store[0]=2;
    for(i=1;i<length;i++)
        store[i]=store[i-1]*prime[i];
}
int main()
{
    seive();
    calc();

    int n,t=1;
    ul number,that,u;
    cin>>n;
    while(n--)
    {
        cin>>number;
        that=sqrt(number);

        ul sum=1;
        for(i=0;i<length && prime[i]<=that;i++)
        {
            ul thing=number;
            thing/=prime[i];
            while(thing>=prime[i])
            {
                thing/=prime[i];
                sum*=prime[i];
            }
        }

        u=upper_bound(prime,prime+length,number)-prime-1;
        sum*=store[u];

        printf("Case %d: %u\n",t++,sum);
    }

    return 0;
}
