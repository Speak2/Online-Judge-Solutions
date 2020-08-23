#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long

using namespace std;

int main()
{
    int n,t=1;
    cin>>n;

    while(n--)
    {
        int first,second,one,two;
        cin>>first>>second;

        if(first==0)
        {
            cout<<"Case "<<t++<<": "<<0<<endl;
            continue;
        }

        one=second/(2*first);
        two=one+1;
        int number;

        if(one*(second-first*one)<two*(second-first*two))
            number=two;
        else
            number=one;

        printf("Case %d: %d\n",t++,number);
    }
    return 0;
}
