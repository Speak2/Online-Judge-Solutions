#include <bits/stdc++.h>
#define pi 3.14159265358979323846

using namespace std;

int main()
{
    int n,q;
    cin>>n;
    for(q=1;q<=n;q++)
    {
        string number,number2;
        cin>>number;
        number2=number;
        reverse(number2.begin(),number2.end());

        if(number==number2)
            printf("Case %d: Yes\n",q);
        else
            printf("Case %d: No\n",q);
    }
    return 0;
}
