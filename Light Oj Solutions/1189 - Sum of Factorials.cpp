#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,t;
    long long fact[21],data=1;
    fact[0]=1;
    for(int i=1;i<21;i++)
    {
        data*=i;
        fact[i]=data;
    }
    cin>>n;

    for(t=1;t<=n;t++)
    {
        long long number;
        stack <int> digits;
        cin>>number;

        for(int i=19;i>2;i--)
        {
            if(number>=fact[i] && number<fact[i+1])
            {
                digits.push(i);
                number-=fact[i];
            }
        }
        if(number==1)
        {
            digits.push(1);
            number--;
        }
        else if(number==2)
        {
            digits.push(2);
            number-=2;
        }
        else if(number==3)
        {
            digits.push(2);
            digits.push(1);
            number-=3;
        }
        else if(number==4)
        {
            digits.push(2);
            digits.push(1);
            digits.push(0);
            number-=4;
        }
        printf("Case %d: ",t);
        if(number==0)
        {
            int that;
            that=digits.top();
            printf("%d!",that);
            digits.pop();
            while(!digits.empty())
            {
                that=digits.top();
                printf("+%d!",that);
                digits.pop();
            }
            cout<<endl;
        }
        else
            printf("impossible\n");

    }
    return 0;
}
