#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,cases=1;

    cin>>n;

    while(n--)
    {
        int x1,y1,x2,y2,m;
        cin>>x1>>y1>>x2>>y2>>m;

        cout<<"Case "<<cases<<":"<<endl;
        while(m--)
        {
            int data1,data2;
            cin>>data1>>data2;

            if(data1>x1 && data1<x2 && data2>y1 && data2<y2)
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }
        cases++;
    }
}
