#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int t=1;t<=n;t++)
    {
        int first,second,third,numbers;
        cin>>first>>second>>third;
        int dataset[first+1][third+1];

        for(int i=1;i<=first;i++)
        {
            for(int j=1;j<=third;j++)
                cin>>dataset[i][j];
        }

        cin>>numbers;
        map <int,bool> result;

        for(int i=0;i<numbers;i++)
        {
            int digit;
            cin>>digit;
            result[digit]=true;
        }

        bool flag1=false,flag2=false;

        for(int i=1;i<=first;i++)
        {
            flag1=false;
            for(int j=1;j<=third;j++)
            {
                if(dataset[i][j]>0 && result[dataset[i][j]])
                    flag1=true;
                if(dataset[i][j]<0 && !result[-dataset[i][j]])
                    flag1=true;
            }
            if(flag1==false)
                flag2=true;
        }

        if(flag2==false)
            printf("Case %d: Yes\n",t);
        else
            printf("Case %d: No\n",t);

    }
    return 0;
}
