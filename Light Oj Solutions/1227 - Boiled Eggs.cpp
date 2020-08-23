#include <bits/stdc++.h>
#define pi 3.14159265358979323846

using namespace std;

int main()
{
    int n,cases=1;
    cin>>n;

    while(n--)
    {
        int eggs,amount,weight;
        cin>>eggs>>amount>>weight;

        int i,weteggs[eggs],sum=0;
        for(i=0;i<eggs;i++)
            cin>>weteggs[i];
        for(i=0;i<amount && i<eggs;i++)
        {
            if(sum+weteggs[i]<=weight)
                sum+=weteggs[i];
            else
                break;
        }
        cout<<"Case "<<cases<<": "<<i<<endl;
        cases++;
    }
    return 0;
}
