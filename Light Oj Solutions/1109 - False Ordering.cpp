#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,times=1;
    cin>>n;

    int divisors[2][1001]={0};

    for(int i=1;i<1001;i++)
    {
        divisors[0][i]=i;
        for(int j=1;j<=i/2+1;j++)
        {
            if(i%j==0)
                divisors[1][i]++;
        }
        if(i>2)
            divisors[1][i]++;
    }
    int i,j;
    for(i=0;i<1000;i++)
    {
        for(j=0;j<1000;j++)
        {
            if(divisors[1][j]>divisors[1][j+1])
            {
                int temp;
                temp=divisors[1][j];
                divisors[1][j]=divisors[1][j+1];
                divisors[1][j+1]=temp;
                temp=divisors[0][j];
                divisors[0][j]=divisors[0][j+1];
                divisors[0][j+1]=temp;
            }
            if(divisors[0][j]<divisors[0][j+1] && divisors[1][j]==divisors[1][j+1])
            {
                int temp;
                temp=divisors[0][j];
                divisors[0][j]=divisors[0][j+1];
                divisors[0][j+1]=temp;
            }
        }
    }

    while(n--)
    {
        int number;
        cin>>number;
        cout<<"Case "<<times<<": "<<divisors[0][number]<<endl;

        times++;
    }
}
