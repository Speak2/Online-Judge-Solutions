#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long

using namespace std;
bool prime[46500]={false};

void seive()
{
    for(int i=2;i*i<46500;i++)
    {
        if(prime[i]==false)
        {
            for(int j=i*i;j<46500;j+=i)
                prime[j]=true;
        }
    }
}

int main()
{
    seive();
    vector <int> dataset;

    for(int i=2;i<46341;i++)
    {
        if(prime[i]==false)
            dataset.push_back(i);
    }
    int n,t=1;
    cin>>n;

    while(n--)
    {
        long long number,genjam=0;
        cin>>number;
        int data=number;
        set<int> digits;

        if(number<0)
        {
            genjam=1;
            number*=-1;
        }
        int i=0,answer;
        while(number>1)
        {
            int thing=0,total=0;
            for(;dataset[i]*dataset[i]<=number && i<4792;i++)
            {
                if(number%dataset[i]==0)
                {
                    thing=dataset[i];
                    break;
                }
            }
            if(thing==0)
                break;

            while(number%thing==0)
            {
                if(number==1)
                    break;
                number/=thing;
                total++;
            }
            digits.insert(total);
        }

        if(digits.size()==0)
            answer=1;
        else if(digits.size()==1)
            answer=*digits.begin();
        else
            answer=*--digits.end()/(*digits.begin());

        if(genjam==1)
        {
            if(answer%2==0)
            {
                while(answer%2==0)
                    answer/=2;
            }
        }
        printf("Case %d: %d\n",t++,answer);
    }
    return 0;
}
