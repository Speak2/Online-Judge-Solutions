#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int t=1;t<=n;t++)
    {
        int number;
        cin>>number;

        char data[100]=" ";
        int i=0;
        while(number!=0)
        {
            int digit=number%2;
            data[i]=digit+48;
            number/=2;
            i++;
        }
        data[i]='0';
        data[i+1]='\0';

        for(i=0;i<strlen(data);i++)
        {
            if(data[i]=='1' && data[i+1]=='0')
            {
                swap(data[i],data[i+1]);
                sort(data,data+i,greater<char>());
                break;
            }
        }

        i=0;
        int sum=0;
        while(i<strlen(data))
        {
            sum+=(pow(2,i)*(data[i]-48));
            i++;
        }

        printf("Case %d: %d\n",t,sum);

    }
    return 0;
}
