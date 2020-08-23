#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define hobe 1000000
#define length 78498
#define check(a) (dataset[a>>6] & (1<<((a>>1)&31)))
#define sett(a) (dataset[a>>6] | (1<<((a>>1)&31)))
using namespace std;

int prime[length];
int dataset[hobe/64];
map<int,int> hishab;

void factor(ll number)
{
    for(int i=0;i<length && prime[i]<=sqrt(number);i++)
    {
        int times=0;
        while(number%prime[i]==0)
        {
            number/=prime[i];
            times++;
        }
        if(times!=0 && hishab[prime[i]]<times )
            hishab[prime[i]]=times;
    }
    if(number!=1)
        hishab[number]=1;
}

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
        hishab.clear();
        ll first,second,third,done=0;
        cin>>first>>second>>third;

        factor(first);
        factor(second);

        for(auto i:hishab)
        {
            int times=0;
            while(third%i.first==0)
            {
                third/=i.first;
                times++;
            }
            if(i.second==times)
                hishab[i.first]=0;
            else if(times<i.second)
            {
                done=1;
                break;
            }
            else
                hishab[i.first]=times;
        }


        //for(auto i:hishab)
        //    cout<<i.first<<" "<<i.second<<endl;
        if(done==1)
            printf("Case %d: impossible\n",t++);
        else
        {
            for(auto i:hishab)
            {
                if(i.second!=0)
                {
                    while(i.second>0)
                    {
                        third*=i.first;
                        i.second--;
                    }
                }
            }

            printf("Case %d: %lld\n",t++,third);
        }

    }

    return 0;
}
