#include <bits/stdc++.h>
using namespace std;

long long josephas(long long first,long long second)
{
    if(first==1)
        return 1;
    else
        return ((josephas(first-1,second)+second-1)%first)+1;
}

int main()
{
    int n,t=1;
    cin>>n;

    while(n--)
    {
        long long first,second;
        cin>>first>>second;

        printf("Case %d: %lld\n",t++,josephas(first,second));
    }
    return 0;
}
