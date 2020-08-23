#include <bits/stdc++.h>
#define length 46345
#define ll long long
using namespace std;

int prime[4792];
bool dataset[length];
bool hishab[100005]={false};

void seive()
{
    for(int i=3;i<length;i+=2)
    {
        if(!dataset[i])
            for(int j=i*i;j<length;j+=i*2)
                dataset[j]=true;
    }
    int x=1;
    prime[0]=2;
    for(int i=3;i<length;i+=2)
        if(!dataset[i])
            prime[x++]=i;
}

int main()
{
    seive();
    int n,t=1;
    cin>>n;

    while(n--)
    {
        memset(hishab,false,sizeof hishab);
        ll first,second;
        cin>>first>>second;

        for(ll i=0;i<4792 && prime[i]<=sqrt(second);i++)
        {
            ll base=(first/prime[i])*prime[i];
            if(first>base)
                base+=prime[i];

            for(ll j=base;j<=second;j+=prime[i])
                    hishab[j-first]=true;

            if(prime[i]==base)
                hishab[base-first]=false;
        }
        ll times=0;
        for(ll i=0;i<=second-first;i++)
            if(hishab[i]==false)
                times++;
        if(first<2)
            times--;

        printf("Case %d: %d\n",t++,times);
    }
    return 0;
}
