#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,t;
    cin>>n;

    for(t=1;t<=n;t++)
    {
        stack <string> forwardstack;
        stack <string> backwardstack;
        string current="http://www.lightoj.com/",first="ae";

        printf("Case %d:\n",t);
        while(first!="QUIT")
        {
            cin>>first;

            if(first=="VISIT")
            {
                string second;
                cin>>second;
                backwardstack.push(current);
                current=second;
                while(!forwardstack.empty())
                {
                    forwardstack.pop();
                }
                cout<<current<<endl;
            }
            else if(first=="BACK")
            {
                if(backwardstack.empty())
                {
                    printf("Ignored\n");
                }
                else
                {
                    forwardstack.push(current);
                    current=backwardstack.top();
                    backwardstack.pop();
                    cout<<current<<endl;
                }
            }
            else if(first=="FORWARD")
            {
                if(forwardstack.empty())
                {
                    printf("Ignored\n");
                }
                else
                {
                    backwardstack.push(current);
                    current=forwardstack.top();
                    forwardstack.pop();
                    cout<<current<<endl;
                }
            }
        }
    }
    return 0;
}
