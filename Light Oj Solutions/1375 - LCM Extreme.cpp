#include <bits/stdc++.h>
#define MOD 9223372036854775807
using namespace std;
unsigned long long phi[3000005];
unsigned long long result[3000005];

void totient()
{
    for(int i=1;i<=3000000;i++)
        phi[i]=i;

    for(int i=2;i<=3000000;i++)
    {
        if(phi[i]==i)
            for(int j=i;j<=3000000;j+=i)
                phi[j]-=phi[j]/i;
    }
}

int main()
{
    totient();
    for(int i=1;i<=3000000;i++)
    {
        for(int j=i;j<=3000000;j+=i)
            result[j]+=phi[i]*i;

        result[i]=(result[i]-1)/2.0;
        result[i]*=i;
        //if(i==262187)
          //  cout<<result[i]<<endl;
        result[i]+=result[i-1];
    }
    //freopen("thing.txt","w",stdout);

    int n,t=1;
    cin>>n;

    while(n--)
    {
        int number;
        cin>>number;

        printf("Case %d: %llu\n",t++,result[number]);
    }
    return 0;
}
