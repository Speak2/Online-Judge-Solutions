#include <bits/stdc++.h>
using namespace std;

int main()
{
    int dataset[101][101]={0};
    vector<int> primes={2,3,5,7};

    for(int i=2;i<101;i++)
    {
        int digit=i;
        for(int j=0;j<primes.size();j++)
        {
            int times=0;
            while(digit%primes[j]==0)
            {
                digit/=primes[j];
                times++;
            }
            dataset[i][primes[j]]=times;
        }
        if(digit!=1)
            dataset[i][digit]=1;
    }

    for(int i=3;i<101;i++)
    {
        for(int j=2;j<101;j++)
        {
            dataset[i][j]+=dataset[i-1][j];
        }
    }

    int n,t=1;
    cin>>n;

    while(n--)
    {
        int number;
        cin>>number;

        printf("Case %d: %d =",t++,number);

        int done=0;
        for(int i=2;i<=number;i++)
        {
            if(done>0 && dataset[number][i])
                printf(" *");
            if(dataset[number][i])
            {
                printf(" %d (%d)",i,dataset[number][i]);
                done++;
            }
        }
        cout<<"\n";
    }
}
