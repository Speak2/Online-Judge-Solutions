#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,times=1;

    cin>>n;

    while(n--)
    {
        double first,second,data1,result;
        cin>>first>>second;

        data1=sin(3.141592653589793/second);

        result=(first*data1)/(1+data1);

        cout<<"Case "<<times<<": "<<setprecision(10)<<result<<endl;
        times++;
    }
}
