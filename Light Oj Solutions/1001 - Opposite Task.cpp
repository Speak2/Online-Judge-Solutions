#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    while(n--)
    {
        int number;
        cin>>number;
        if(number>10)
            cout<<number-10<<" "<<10<<endl;
        else
            cout<<0<<" "<<number<<endl;
    }
    return 0;
}
