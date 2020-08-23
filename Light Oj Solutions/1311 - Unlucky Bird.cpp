#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
    double leftvelo,rightvelo,birdvelo,leftdec,rightdec;
    cin>>leftvelo>>rightvelo>>birdvelo>>leftdec>>rightdec;

    double time,distance,bdis;
    time=max((leftvelo/leftdec),(rightvelo/rightdec));

    bdis=time*birdvelo;

    distance=((leftvelo*leftvelo)/(2*leftdec))+((rightvelo*rightvelo)/(2*rightdec));

    printf("Case %d: %.8lf %.8lf\n",i,distance,bdis);
    }
    return 0;
}
