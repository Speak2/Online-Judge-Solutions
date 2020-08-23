#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int i=1;
    while(n--)
    {
        int first,second;

        cin>>first>>second;

        cout<<"Case "<<i<<": "<<first+second<<endl;
        i++;
    }
    return 0;
}
