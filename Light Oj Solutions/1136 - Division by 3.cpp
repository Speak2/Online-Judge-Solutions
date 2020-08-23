#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,t;
    cin>>n;

    for(t=1;t<=n;t++)
    {
        int first,second,number,third,total=0;
        cin>>first>>second;
        number=first%3;

        if(number==0)
        {
            first++;
            total+=1;
        }
        else if(number==2)
        {
            first+=2;
            total+=2;
        }
        if(second%3==0)
        {
            second-=2;
            total+=2;
        }
        else if(second%3==2)
        {
            second-=1;
            total+=1;
        }
        total+=((second-first)/3)*2;

        printf("Case %d: %d\n",t,total);
    }
}
