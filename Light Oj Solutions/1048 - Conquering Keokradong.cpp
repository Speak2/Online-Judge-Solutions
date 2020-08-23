#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(NULL);cin.tie(NULL);cout.tie(NULL)
#define ll long long
#define gcd(a,b) __gcd(a,b)
using namespace std;
int dataset[1005];
int first,second;

bool possible(int data)
{
    int number=0,times=0;
    for(int i=0;i<first;i++)
    {
        number+=dataset[i];
        if(number>data)
            times++,number=dataset[i];
    }
    times++;

    return times<=second;
}
void print(int data)
{
    int number=0;

    for(int i=0;i<first;i++)
    {
        number+=dataset[i];
        if(number>data || first-i+1==second)
        {
            second--;
            number-=dataset[i];
            printf("%d\n",number);
            number=dataset[i];
        }
    }
    printf("%d\n",number);
}

int main()
{
    IOS;
    //freopen("output.txt","w",stdout);

    int n,t=1;
    cin>>n;

    while(n--)
    {
        cin>>first>>second;
        first++;
        second++;
        int total=0,low=INT_MIN,ans=0;

        for(int i=0;i<first;i++)
        {
            cin>>dataset[i];
            low=max(low,dataset[i]);
            total+=dataset[i];
        }

        while(low<total)
        {
            int mid=(low+total)/2;

            if(possible(mid))
                total=mid,ans=mid;
            else
                low=mid+1;
        }

        printf("Case %d: %d\n",t++,ans);
        print(ans);
    }
    return 0;
}
