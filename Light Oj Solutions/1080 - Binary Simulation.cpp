#include <bits/stdc++.h>

using namespace std;


void build(int tree[],int node,char name[],int low,int high)
{
    if(low==high)
    {
        if(name[low]=='0')
            tree[node]=0;
        else if(name[low]=='1')
            tree[node]=1;
    }
    else
    {
        int mid=(low+high)/2;
        build(tree,node*2,name,low,mid);
        build(tree,node*2+1,name,mid+1,high);
    }
}

void range_update(int tree[],int lazy_tree[],int node,int low,int high,int first,int second)
{

    if(first>high || second<low || low>high)
        return;

    if(low>=first && high<=second)
    {
        lazy_tree[node]++;
        return;
    }

    int mid=(low+high)/2;
    range_update(tree,lazy_tree,node*2,low,mid,first,second);
    range_update(tree,lazy_tree,node*2+1,mid+1,high,first,second);
}

int single_find(int tree[],int lazy_tree[],int node,int low,int high,int index,int data)
{
    if(low==high)
    {
        data+=lazy_tree[node];
        if(data%2==0)
            return tree[node];
        else if(data%2==1)
        {
            if(tree[node]==0)
                return 1;
            else
                return 0;
        }
    }
    else
    {
        int mid=(low+high)/2;
        if(mid>=low && mid>=index)
        {
            data+=lazy_tree[node];
            return single_find(tree,lazy_tree,node*2,low,mid,index,data);
        }
        else
        {
            data+=lazy_tree[node];
            return single_find(tree,lazy_tree,node*2+1,mid+1,high,index,data);
        }

    }
}

int main()
{

    int t;
    scanf("%d",&t);

    for(int l=1;l<=t;l++)
    {
        printf("Case %d:\n",l);
        char name[100010];
        scanf("%s",name);

        int ques,length=strlen(name),tree[4*length]={0},lazytree[4*length]={0};
        build(tree,1,name,0,length-1);

        scanf("%d",&ques);
        while(ques--)
        {
            char letter;
            int first,second;
            scanf(" %c",&letter);

            if(letter=='I')
            {
                scanf("%d %d",&first,&second);
                range_update(tree,lazytree,1,0,length-1,first-1,second-1);
            }
            else if(letter=='Q')
            {
                scanf("%d",&first);
                printf("%d\n",single_find(tree,lazytree,1,0,length-1,first-1,0));
            }
        }
    }
    return 0;
}
