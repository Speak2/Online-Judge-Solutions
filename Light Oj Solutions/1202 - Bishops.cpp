#include <bits/stdc++.h>
#define pi 3.14159265358979323846

using namespace std;


int main()
{
    int n,cases=1;
    cin>>n;

    while(n--)
    {
        int first1,first2,second1,second2;
        cin>>first1>>first2>>second1>>second2;

        if((first1+first2)%2!=(second1+second2)%2)
            printf("Case %d: impossible\n",cases);
        else
        {
            if((first1+first2==second1+second2) || second1-first1==second2-first2)
                printf("Case %d: 1\n",cases);
            else
                printf("Case %d: 2\n",cases);
        }
        cases++;
    }
    return 0;
}
