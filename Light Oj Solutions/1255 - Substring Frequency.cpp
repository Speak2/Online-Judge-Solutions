#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k=1;

    cin>>n;

    while(n--)
    {
        string text,pattern;
        int found=0;

        cin>>text>>pattern;

        int m=pattern.size(),n=text.size(),lpsara[m];

        lpsara[0]=0;

        int len=0,i=1,j;

        while(i<m)
        {
            if(pattern[i]==pattern[len])
            {
                len++;
                lpsara[i]=len;
                i++;
            }
            else
            {
                if(len!=0)
                    len=lpsara[len-1];
                else
                {
                    lpsara[i]=0;
                    i++;
                }
            }
        }
        i=0,j=0;

        while(i<n)
        {
            if(pattern[j]==text[i])
            {
                i++;
                j++;
            }
            if(j==m)
            {
                found++;
                j=lpsara[j-1];
            }
            else if(i<n && pattern[j]!=text[i])
            {
                if(j!=0)
                    j=lpsara[j-1];
                else
                    i++;
            }
        }
        cout<<"Case "<<k<<": "<<found<<endl;
        k++;
    }
    return 0;
}
