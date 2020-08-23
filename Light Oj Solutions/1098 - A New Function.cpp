#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define max INT_MAX
#define min INT_MIN
#define MOD 1000000007
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a/gcd(a,b))*b
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define filein freopen("in.txt","r",stdin)
#define fileout freopen("out.txt","w",stdout)
using namespace std;

int main()
{
    int n,t=1;
    cin>>n;

    while(n--)
    {
        ll number,sum=0;
        cin>>number;
        ll thing=sqrt(number);

        for(ll i=2;i<=thing;i++)
        {
            ll j=number/i;
            sum+=(j+i)*(j-i+1)/2;
            sum+=i*(j-i);
        }

        printf("Case %d: %lld\n",t++,sum);
    }
    return 0;
}
