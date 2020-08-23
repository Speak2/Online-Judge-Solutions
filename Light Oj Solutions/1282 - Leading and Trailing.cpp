#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define MOD 1000
using namespace std;

int bigmod(ll number,int power)
{
    if(power==0) return 1;
    ll x=bigmod(number,power/2);
    x=(x*x)%MOD;
    if(power%2==1)
        x*=number;
    return x%MOD;
}

int main()
{
    int n,t=1;
    cin>>n;

    while(n--)
    {
        ll number,k,times=0;
        cin>>number>>k;

        double data=k*log10(number);
        data=data-(int)data;
        data=pow(10,data);
        string ss=to_string(data),notun;
        for(int i=0;i<ss.size();i++)
        {
            if(ss[i]>='0' && ss[i]<='9')
            {
                notun.push_back(ss[i]);
                times++;
            }
            if(times==3)
                break;
        }
        cout<<"Case "<<t++<<": "<<notun<<" "<<setfill('0')<<setw(3)<<bigmod(number,k)<<endl;
    }
}
