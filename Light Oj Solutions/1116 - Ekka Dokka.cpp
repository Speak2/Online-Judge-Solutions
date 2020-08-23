#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int l=1;l<=n;l++)
    {
        long long number;
        cin>>number;

        if(number%2==0)
        {
            long long data1,data2;
            for(long long i=2;i<number/2;i+=2)
            {
                if(number%i==0 && (number/i)%2==1)
                {
                    data1=number/i;
                    data2=i;
                    break;
                }
            }
            printf("Case %d: %lld %lld\n",l,data1,data2);
        }
        else
            printf("Case %d: Impossible\n",l);
    }
}
