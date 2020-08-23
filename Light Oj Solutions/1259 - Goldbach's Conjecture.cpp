#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define hobe 10000000
#define ul unsigned
#define length 664579

using namespace std;

ul prime[length+5];
bool dataset[hobe+5];
int x=1,i,j;

void seive()
{
    for(i=2;i*i<=hobe;i++)
        if(!dataset[i])
            for(j=i*i;j<=hobe;j+=i)
                dataset[j]=true;
    prime[0]=2;
    for(int i=3;i<=hobe;i+=2)
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
        int number;
        cin>>number;

        int times=0;
        for(int i=0;i<length && prime[i]<number;i++)
        {
            int first=prime[i];
            int second=number-first;

            if(second<first)
                break;
            if(!dataset[second])
                times++;
        }
        if(number==4)
            times=1;
        printf("Case %d: %d\n",t++,times);
    }

    return 0;
}
