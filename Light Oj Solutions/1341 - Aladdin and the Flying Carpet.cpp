#include <bits/stdc++.h>
using namespace std;

bool dataset[1000005];
int prime[78500];
void seive()
{
    prime[0]=2;
    int x=1;
    for(int i=3;i*i<1000000;i+=2)
    {
        if(!dataset[i])
            for(int j=i*i;j<1000000;j+=i*2)
                dataset[j]=true;
    }

    for(int i=3;i<1000000;i+=2)
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
        unsigned long long first,second,third;
        cin>>first>>second;

        if(second*second>first)
            printf("Case %d: %d\n",t++,0);
        else
        {
            third=first;
            long long answer=1;
            for(int i=0;i<78498 && prime[i]<=sqrt(first);i++)
            {
                int times=0;
                while(first%prime[i]==0)
                {
                    first/=prime[i];
                    times++;
                }
                answer*=(times+1);
            }
            if(first>1)
                answer*=2;

            answer/=2;
            for(int i=1;i<second;i++)
                if(third%i==0)
                    answer--;

            printf("Case %d: %lld\n",t++,answer);
        }
    }
    return 0;
}
