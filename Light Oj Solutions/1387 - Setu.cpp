#include <iostream>

using namespace std;

int main()
{
    int n,cases=1;
    cin>>n;

    while(n--)
    {
        int times;
        cin>>times;
        cout<<"Case "<<cases<<":"<<endl;
        long long sum=0;
        while(times--)
        {
            string name;
            long long data;
            cin>>name;

            if(name=="donate")
            {
                cin>>data;
                sum+=data;
            }
            else if(name=="report")
                cout<<sum<<endl;
        }
        cases++;
    }
    return 0;
}
