#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,cases=1;

    cin>>n;

    while(n--)
    {
        int radi1,radi2,height,later;
        cin>>radi1>>radi2>>height>>later;

        double data=(double)(radi1-radi2)/height,result2;
        data=(data*later)+radi2;

        result2=((3.141592653589793*later)/3)*(data*data+data*radi2+radi2*radi2);

        cout<<"Case "<<cases<<": "<<setprecision(20)<<result2<<endl;
        cases++;
    }
}
