#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,times=1;

    cin>>t;
    while(t--)
    {
        long long int a,b,c,d,e,f,n,output,data;
        cin>>a>>b>>c>>d>>e>>f>>n;

        if(n>5)
        {
            for(int i=0;i<=n-6;i++)
            {
                output=a+b+c+d+e+f;
                output%=10000007;
                a=b;
                b=c;
                c=d;
                d=e;
                e=f;
                f=output;
            }
        }
        else
        {
            if(n==0)
                output=a;
            else if(n==1)
                output=b;
            else if(n==2)
                output=c;
            else if(n==3)
                output=d;
            else if(n==4)
                output=e;
            else if(n==5)
                output=f;
        }
        data=output%10000007;

        printf("Case %d: %lld\n",times,data);
        times++;
    }
    return 0;
}
