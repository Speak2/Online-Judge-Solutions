#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,t=1;
    cin>>n;

    while(n--)
    {
        unsigned long long int first,second,data;
        cin>>first>>second;

        data=first-second;

        set<long long> dataset;

        for(long long i=1;i<=sqrt(data);i++)
        {
            if(data%i==0)
            {
                if(i>second)
                    dataset.insert(i);
                if((data/i)>second)
                    dataset.insert(data/i);
            }
        }

        cout<<"Case "<<t++<<":";
        if(dataset.size()==0)
            cout<<" impossible";
        else
        {
            for(auto i:dataset)
                cout<<" "<<i;
        }
        cout<<endl;
    }
    return 0;
}
