#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,times=1;
    cin>>n;

    while(n--)
    {
        int deci[4],bin[4],i;

        scanf("%d.%d.%d.%d",&deci[0],&deci[1],&deci[2],&deci[3]);
        scanf("%d.%d.%d.%d",&bin[0],&bin[1],&bin[2],&bin[3]);

        int done=0;
        for(i=0;i<4;i++)
        {
            int sum=0,j=0;
            while(bin[i]!=0)
            {
                int data=bin[i]%10;
                sum+=data*pow(2,j);
                bin[i]/=10;
                j++;
            }
            if(sum==deci[i])
                done++;
            else
                break;
        }
        if(done==4)
            cout<<"Case "<<times<<": Yes"<<endl;
        else
            cout<<"Case "<<times<<": No"<<endl;
        times++;
    }

}
