#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int l=1;l<=t;l++)
    {
        int first,second,length=1,data;
        cin>>first>>second;
        data=second;

        while(second%first!=0)
        {
            second=((second%first)*10)+data;
            length++;
        }

        printf("Case %d: %d\n",l,length);
    }

    return 0;
}
