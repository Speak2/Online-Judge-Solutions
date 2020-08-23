#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ull unsigned long long
#define ll long long

using namespace std;
bool prime[1000006]={false};

int main()
{
    vector<int> dataset;
    IOS;
    prime[1]=true;

    for(int i=2;i*i<=1000006;i+=2)
    {
        if(!prime[i])
        {
            for(int j=i*i;j<=1000006;j+=i)
                prime[j]=true;
        }
        if(i==2)
            i--;
    }
    dataset.push_back(2);
    for(int i=3;i<1000000;i+=2)
    {
        if(!prime[i])
            dataset.push_back(i);
    }

    int n,t=1;
    cin>>n;

    while(n--)
    {
        long long number,total=1;
        cin>>number;

        for(int i=0;i<dataset.size() && dataset[i]*dataset[i]<=number;i++)
        {
            int times=0;
            while(number%dataset[i]==0)
            {
                number/=dataset[i];
                times++;
                if(number==0 || number==1)
                    break;
            }
            total*=(times+1);
        }
        if(number!=1)
            total*=2;

        printf("Case %d: %lld\n",t++,total-1);
    }
    return 0;
}
