#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;

ll hobe(ll number)
{
    ll data=0;
    while(number)
    {
        data+=number/5;
        number/=5;
    }
    return data;
}

int main()
{
    IOS;
    int n,t=1;
    cin>>n;

    while(n--)
    {
        ll data;
        cin>>data;

        int l=0,r=1000000000,mid,ans=0;

        while(l<=r)
        {
            mid=(l+r)/2;
            ll k=hobe(mid);

            if(k==data)
            {
                ans=mid;
                break;
            }
            else if(k>data)
                r=mid-1;
            else
                l=mid+1;
        }
        ans=(ans/5)*5;
        if(!ans)
            printf("Case %d: impossible\n",t++);
        else
            printf("Case %d: %lld\n",t++,ans);
    }
    return 0;
}
