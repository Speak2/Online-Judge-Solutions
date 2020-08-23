#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;

ll zeros(ll number)
{
    ll data=0;
    for(ll i=5;number/i>=1;i*=5)
        data+=number/i;

    return data;
}
ll then(ll number)
{
    ll data=0;
    for(ll i=2;number/i>=1;i*=2)
        data+=floor(number/i);

    return data;
}
ll fives(ll number)
{
    ll data=0;
    while(number%5==0)
    {
        number/=5;
        data++;
        if(number==0 || number==1)
            break;
    }

    return data;
}
ll another(ll number)
{
    ll data=0;
    while(number%2==0)
    {
        number/=2;
        data++;
        if(number==0 || number==1)
            break;
    }

    return data;
}

int main()
{
    int n,t=1;
    cin>>n;

    while(n--)
    {
        ll first,second,third,fourth,one=0,two=0;
        cin>>first>>second>>third>>fourth;

        one+=(fives(third)*fourth);
        two+=(another(third)*fourth);
        one+=zeros(first)-zeros(second)-zeros(first-second);
        two+=then(first)-then(second)-then(first-second);

        if(two<one)
            one=two;

        printf("Case %d: %lld\n",t++,one);
    }
    return 0;
}
