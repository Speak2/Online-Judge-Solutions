#include <bits/stdc++.h>
#define pi 2*acos(0.0)

using namespace std;

int main()
{
    int n,t;
    cin>>n;
    getchar();
    for(t=1;t<=n;t++)
    {
        char first[220];
        long long divident,i,result,sum=0,data=0,done=0,length;
        cin>>first>>divident;
        length=strlen(first);

        if(first[0]=='-')
            data=1;
        if(divident<0)
            divident*=(-1);

        for(i=data;first[i]!='\0';i++)
        {
            sum+=(first[i]-'0');
            result=sum%divident;
            sum=result*10;
            if(result==0 && i==(length-1))
            {
                done=1;
                printf("Case %d: divisible\n",t);
            }
        }
        if(done==0)
            printf("Case %d: not divisible\n",t);
    }
    return 0;
}
