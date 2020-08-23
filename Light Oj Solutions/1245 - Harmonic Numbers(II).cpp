#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,t=1;
    cin>>n;

    while(n--)
    {
        long long number;
        cin>>number;
        long long result=0;

        for(int i=1;i<=sqrt(number);i++)
            result+=((number/i)+(number/i-number/(i+1))*i);

        int data=sqrt(number);
        if(data==number/data)
            result-=data;

        printf("Case %d: %lld\n",t++,result);
    }
    return 0;
}
