#include <bits/stdc++.h>>
using namespace std;

int main()
{
    int n,t=1;
    cin>>n;

    while(n--)
    {
        int a;
        cin>>a;
        int dataset[a],total=0;

        for(int i=0;i<a;i++)
            cin>>dataset[i];

        sort(dataset,dataset+a);

        for(int i=0;i<a-1;i++)
        {
            for(int j=i+1;j<a;j++)
            {
                int low=0,high=a-1,ans=-1;

                while(low<=high)
                {
                    int mid=(low+high)/2;

                    if(dataset[i]+dataset[j]>dataset[mid])
                    {
                        low=mid+1;
                        ans=mid;
                    }
                    else
                        high=mid-1;
                }
                if(ans!=-1)
                    total+=ans-j;
            }
        }

        printf("Case %d: %d\n",t++,total);
    }
}
