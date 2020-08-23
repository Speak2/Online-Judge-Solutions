#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,t=1;
    cin>>n;

    while(n--)
    {
        map<int,int>dataset;
        int number;
        cin>>number;
        long long sum=0;

        for(int i=0;i<number;i++)
        {
            int data;
            cin>>data;
            data++;
            dataset[data]++;
        }

        for(auto it=dataset.begin();it!=dataset.end();it++)
            sum+=(ceil((it->second*1.0)/ it->first)* it->first);

        printf("Case %d: %lld\n",t++,sum);
    }
    return 0;
}
