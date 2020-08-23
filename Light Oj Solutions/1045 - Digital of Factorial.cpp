#include<bits/stdc++.h>
using namespace std;

double logg[1000005];

int main()
{
    int n;
    cin>>n;
    logg[0]=0;
    for(int i=1;i<=1000000;i++)
        logg[i]=logg[i-1]+log(i);
    for(int l=1;l<=n;l++)
    {
        int first,second;
        cin>>first>>second;

        long long result=logg[first]/log(second);
        printf("Case %d: %lld\n",l,result+1);
    }
}
