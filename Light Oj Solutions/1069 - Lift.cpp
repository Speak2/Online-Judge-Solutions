#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,cases=1;

    cin>>n;

    while(n--)
    {
        int you,lift;
        cin>>you>>lift;

        int lift_to_you=abs(lift-you)*4,you_to_ground=you*4;
        int result=lift_to_you+9+10+you_to_ground;

        cout<<"Case "<<cases<<": "<<result<<endl;
        cases++;
    }
}
