#include <bits/stdc++.h>
#define pi 3.14159265358979323846

using namespace std;


int main()
{
    int n,cases=1;
    cin>>n;

    while(n--)
    {
        int number,times=0;
        cin>>number;
        while(number!=0)
        {
            int digit=number%2;
            if(digit==1)
                times++;
            number/=2;
        }
        if(times%2==0)
            printf("Case %d: even\n",cases);
        else
            printf("Case %d: odd\n",cases);
        cases++;
    }
    return 0;
}
