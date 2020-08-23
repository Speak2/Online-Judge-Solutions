#include <bits/stdc++.h>
#define pi 3.14159265358979323846

using namespace std;

int main()
{
    int n,q;
    cin>>n;
    for(q=1;q<=n;q++)
    {
        int students;
        cin>>students;
        char names[students][22];
        int numbers[students][3];
        int j=0;
         while(j<students)
         {
             cin>>names[j];
             for(int i=0;i<3;i++)
                cin>>numbers[j][i];
             j++;
         }
         int total[students];
         for(int i=0;i<students;i++)
            total[i]=numbers[i][0]*numbers[i][1]*numbers[i][2];
        int large=0,small=1000001,data1,data2;
         for(int i=0;i<students;i++)
         {
             if(large<total[i])
             {
                 data1=i;
                 large=total[i];
             }
             if(small>total[i])
             {
                 data2=i;
                 small=total[i];
             }
         }
         if(small!=large)
            printf("Case %d: %s took chocolate from %s\n",q,names[data1],names[data2]);
         else if(small==large)
            printf("Case %d: no thief\n",q);
    }
    return 0;
}
