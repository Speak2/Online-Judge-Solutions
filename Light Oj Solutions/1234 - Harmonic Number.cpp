#include <bits/stdc++.h>
using namespace std;

double dataset[1000005]={0};

int main()
{
    double data=0;
    for(int i=1;i<=100000000;i++)
    {
        data+=(1.0/i);
        if(i%100==0)
            dataset[i/100]=data;
    }
    int n,t=1;
    cin>>n;

    while(n--)
    {
        int data;
        cin>>data;
        double number=dataset[data/100];

        for(int i=100*(data/100)+1;i<=data;i++)
            number+=1.0/i;

        printf("Case %d: %.10lf\n",t++,number);
    }
    return 0;
}
