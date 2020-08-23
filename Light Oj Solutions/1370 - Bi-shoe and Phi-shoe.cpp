#include <bits/stdc++.h>
using namespace std;

bool dataset[1000105];
int prime[80000];
int hishab[1000005];

void seive()
{
    int x=2;
    prime[1]=2;
    for(int i=3;i*i<1000100;i+=2)
    {
        if(!dataset[i])
            for(int j=i*i;j<1000100;j+=i*2)
                dataset[j]=true;
    }
    for(int i=3;i<1000100;i+=2)
        if(!dataset[i])
            prime[x++]=i;

    hishab[1]=2;
    x=2;
    for(int i=2;i<=1000000;i++)
    {
        if(i<prime[x]-1)
            hishab[i]=prime[x];
        else
            hishab[i]=prime[x++];
    }
}

int main()
{
    seive();
    int n,t=1;

    cin>>n;

    while(n--)
    {
        int number;
        cin>>number;
        int total[number];

        for(int i=0;i<number;i++)
            cin>>total[i];

        long long answer=0;
        for(int i=0;i<number;i++)
            answer+=hishab[total[i]];

        printf("Case %d: %lld Xukha\n",t++,answer);
    }
    return 0;
}
