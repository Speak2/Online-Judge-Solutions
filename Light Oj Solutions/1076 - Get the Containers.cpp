#include <bits/stdc++.h>>
using namespace std;
int a,b,dataset[1005];

bool possible(int data)
{
    int number=0,times=0;
    for(int i=0;i<a;i++)
    {
        number+=dataset[i];
        if(number>data)
        {
            times++;
            number=dataset[i];
        }
    }
    times++;
    return times<=b;
}

int main()
{
    int n,t=1;
    cin>>n;

    while(n--)
    {
        cin>>a>>b;
        int boro=0,choto=INT_MIN,ans=0;

        for(int i=0;i<a;i++)
        {
            cin>>dataset[i];
            choto=max(choto,dataset[i]);
            boro+=dataset[i];
        }

        while(choto<=boro)
        {
            int mid=(choto+boro)/2;
            if(possible(mid))
            {
                boro=mid-1;
                ans=mid;
            }
            else
                choto=mid+1;
        }

        printf("Case %d: %d\n",t++,ans);
    }
}
