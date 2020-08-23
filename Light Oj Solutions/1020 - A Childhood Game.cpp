#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int t=1;t<=n;t++)
    {
        int data;
        string name;
        cin>>data>>name;

        if(name=="Alice")
        {
            if(data%3==1)
                printf("Case %d: Bob\n",t);
            else
                printf("Case %d: Alice\n",t);
        }
        else
        {
            if(data%3==0)
                printf("Case %d: Alice\n",t);
            else
                printf("Case %d: Bob\n",t);
        }
    }
    return 0;
}
