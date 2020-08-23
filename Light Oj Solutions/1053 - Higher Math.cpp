#include <bits/stdc++.h>
#define pi 3.14159265358979323846

using namespace std;


int main()
{
    int n,cases=1;
    cin>>n;

    while(n--)
    {
        long long first,second,third;
        cin>>first>>second>>third;

        first*=first;
        second*=second;
        third*=third;
        if(first==second+third || second==first+third || third==first+second)
            printf("Case %d: yes\n",cases);
        else
            printf("Case %d: no\n",cases);
        cases++;
    }
    return 0;
}
