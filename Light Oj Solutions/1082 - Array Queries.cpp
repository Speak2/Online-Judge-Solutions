#include <bits/stdc++.h>

using namespace std;

int dataset[100005];
int segment_tree[400005];

int build(int node,int low,int high)
{
    if(low==high)
        segment_tree[node]=dataset[low];
    else
    {
        int mid=(low+high)/2;
        build(node*2,low,mid);
        build(node*2+1,mid+1,high);
        segment_tree[node]=min(segment_tree[node*2],segment_tree[node*2+1]);
    }
}

int searchit(int node,int low,int high,int first,int second)
{
    if(first<=low && second>=high)
        return segment_tree[node];
    else if(first>high || second<low)
         return INT_MAX;
    int mid=(low+high)/2;

    return min(searchit(node*2,low,mid,first,second),searchit(node*2+1,mid+1,high,first,second));
}

int main()
{
    int t,k=1;
    scanf("%d",&t);

    while(t--)
    {
        int n,ques;
        scanf("%d %d",&n,&ques);

        for(int i=0;i<n;i++)
            scanf("%d",&dataset[i]);

        build(1,0,n-1);
        printf("Case %d:\n",k++);
        while(ques--)
        {
            int first,second;
            scanf("%d %d",&first,&second);
            int result=searchit(1,0,n-1,first-1,second-1);
            printf("%d\n",result);
        }
    }

    return 0;
}
