#include <bits/stdc++.h>>
using namespace std;

int main()
{
    int n,t=1;
    cin>>n;

    while(n--)
    {
        int a,b;
        cin>>a>>b;
        int dataset[a+2][b+2];
        memset(dataset,0,sizeof(dataset));

        int wheel[b+1]={0},total=0,time=0;
        vector<int> line;
        vector<int>::iterator it;

        for(int i=0;i<a;i++)
            line.push_back(i+1);


        for(int i=1;;i++)
        {
            if(i>b)
                i=1;
            time++;
            if(wheel[i]!=0)
            {
                dataset[wheel[i]][i]=1;
                line.push_back(wheel[i]);
                wheel[i]=0;
                total++;
            }

            if(wheel[i]==0)
            {
                for(it=line.begin();it!=line.end();it++)
                {
                    if(dataset[*it][i]==0)
                    {
                        wheel[i]=*it;
                        line.erase(it);
                        break;
                    }
                }
            }
            if(total==a*b)
                break;
        }
        printf("Case %d: %d\n",t++,time*5);
    }
}
