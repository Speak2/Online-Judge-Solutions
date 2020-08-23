#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int t=1;t<=n;t++)
    {
        int m;
        cin>>m;
        int second,sum=0,l=0;
        while(m--)
        {
            int data;
            cin>>data;

            if(l==0)
                sum+=ceil((data-2)/5.0);
            else
            {
                sum+=ceil((data-second)/5.0);
            }
            l++;
            second=data;
        }

        printf("Case %d: %d\n",t,sum);
    }
    return 0;
}
