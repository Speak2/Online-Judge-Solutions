#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define pi 3.14159265358979323846


int main()
{
    int n,cases=1;
    scanf("%d\n",&n);

    while(n--)
    {
        char first[102]=" ",second[102]=" ";
        gets(first);
        gets(second);
        int i,sum1=0,sum2=0;

        for(i=0;first[i];i++)
            first[i]=tolower(first[i]);
        for(i=0;i<strlen(first);i++)
        {
            if(first[i]!=' ')
                sum1+=first[i];
        }
        for(i=0;second[i];i++)
            second[i]=tolower(second[i]);
        for(i=0;i<strlen(second);i++)
        {
            if(second[i]!=' ')
            sum2+=second[i];
        }

        if(sum1==sum2)
            printf("Case %d: Yes\n",cases);
        else
            printf("Case %d: No\n",cases);

        cases++;
    }
    return 0;
}
