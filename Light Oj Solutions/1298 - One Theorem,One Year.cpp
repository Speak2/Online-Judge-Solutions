#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;

bool dataset[3575];
int prime[505];
long long total[505][505];

void sieve()
{
    prime[1]=2;
    int x=2;
    for(int i=3;i<=3571;i+=2)
    {
        if(!dataset[i])
        {
            prime[x++]=i;
            for(int j=i*i;j<=3571;j+=i*2)
                dataset[j]=true;
        }
    }

    total[1][1]=1;
    for(int i=2;i<=500;i++)
        total[1][i]=(2*total[1][i-1])%MOD;

    for(int i=2;i<=500;i++)
    {
        for(int j=i;j<=500;j++)
        {
            long long value=prime[i]*total[i][j-1];
            value+=(prime[i]-1)*total[i-1][j-1];
            value%=MOD;
            total[i][j]=value;
        }
    }

}

int main()
{
    sieve();
    int n,t=1;
    cin>>n;

    while(n--)
    {
        int first,second;
        cin>>first>>second;

        printf("Case %d: %d\n",t++,total[second][first]);
    }
    return 0;
}
