#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int t=1;t<=n;t++)
    {
        int data;
        cin>>data;
        long long sum=0;

        for(int i=0;i<data;i++)
        {
            int notun;
            cin>>notun;

            if(notun>0)
                sum+=notun;
        }

        printf("Case %d: %lld\n",t,sum);
    }
    return 0;
}
