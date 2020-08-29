#include <bits/stdc++.h>>
using namespace std;

int main()
{
    int n,t=1;
    cin>>n;

    while(n--)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        int dataset[a];

        for(int i=0;i<a;i++)
            scanf("%d",&dataset[i]);

        printf("Case %d:\n",t++);
        while(b--)
        {
            int first,second;
            scanf("%d %d",&first,&second);

            int value=upper_bound(dataset,dataset+a,second)-lower_bound(dataset,dataset+a,first);

            printf("%d\n",value);
        }
    }
}
