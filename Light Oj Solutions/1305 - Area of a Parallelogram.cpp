#include <bits/stdc++.h>
#define pi 3.14159265358979323846

using namespace std;


int main()
{
    int n,cases=1;
    cin>>n;

    while(n--)
    {
        long long  first1,first2,second1,second2,third1,third2,fourth1,fourth2;

        cin>>first1>>first2>>second1>>second2>>third1>>third2;

        fourth1=first1+third1-second1;
        fourth2=first2+third2-second2;

        long long result=(first1*second2+second1*third2+third1*fourth2+fourth1*first2)-(first2*second1+second2*third1+third2*fourth1+fourth2*first1);
        result=abs(result);
        result/=2;
        printf("Case %d: %lld %lld %lld\n",cases,fourth1,fourth2,result);
        cases++;
    }
    return 0;
}
