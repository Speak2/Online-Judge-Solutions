#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,times=1;

    cin>>n;
    while(n--)
    {
        int cubes;
        cin>>cubes;
        int x1[cubes],x2[cubes],y1[cubes],y2[cubes],z1[cubes],z2[cubes];

        for(int i=0;i<cubes;i++)
            cin>>x1[i]>>y1[i]>>z1[i]>>x2[i]>>y2[i]>>z2[i];

        int xhigh=0,xlow=1001,yhigh=0,ylow=1001,zhigh=0,zlow=1001;

        for(int i=0;i<cubes;i++)
        {
            xhigh=max(xhigh,x1[i]);
            xlow=min(xlow,x2[i]);
            yhigh=max(yhigh,y1[i]);
            ylow=min(ylow,y2[i]);
            zhigh=max(zhigh,z1[i]);
            zlow=min(zlow,z2[i]);
        }

        long long int intersection=(xlow-xhigh)*(ylow-yhigh)*(zlow-zhigh);

        intersection<0? intersection=0 : intersection;
        cout<<"Case "<<times<<": "<<intersection<<endl;
        times++;
    }
}
