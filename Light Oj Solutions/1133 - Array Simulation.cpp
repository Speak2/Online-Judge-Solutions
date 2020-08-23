#include <bits/stdc++.h>
#define pi 3.14159265358979323846

using namespace std;

int main()
{
    int n,q;
    cin>>n;
    for(q=1;q<=n;q++)
    {
        int numbers,querry;
        cin>>numbers>>querry;
        int number[numbers];
        for(int i=0;i<numbers;i++)
            cin>>number[i];

        while(querry--)
        {
            char command;
            cin>>command;
            if(command=='S')
            {
                int add;
                cin>>add;
                for(int i=0;i<numbers;i++)
                    number[i]+=add;
            }
            else if(command=='M')
            {
                int mul;
                cin>>mul;
                for(int i=0;i<numbers;i++)
                    number[i]*=mul;
            }
            else if(command=='D')
            {
                int div;
                cin>>div;
                for(int i=0;i<numbers;i++)
                    number[i]/=div;
            }
            else if(command=='R')
            {
                for(int i=0,j=numbers-1;i<numbers/2;i++,j--)
                {
                    int temp;
                    temp=number[i];
                    number[i]=number[j];
                    number[j]=temp;
                }
            }
            else if(command=='P')
            {
                int first,second;
                cin>>first>>second;
                int temp;
                temp=number[first];
                number[first]=number[second];
                number[second]=temp;
            }
        }
        printf("Case %d:\n",q);
        cout<<number[0];
        for(int i=1;i<numbers;i++)
            cout<<" "<<number[i];
        cout<<endl;
    }
    return 0;
}
