#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,times=1;

    cin>>n;
    while(n--)
    {
        long long number,grid,data;
        cin>>number;
        int row,collum;

        grid=ceil(sqrt(number));

        data=(grid*grid)-number;
        if(grid%2==0)
        {
            if(data<grid)
            {
                row=grid;
                collum=(grid*grid)-number+1;
            }
            else
            {
                row=number-((grid-1)*(grid-1));
                collum=grid;
            }
        }
        else
        {
            if(data<grid)
            {
                row=(grid*grid)-number+1;
                collum=grid;
            }
            else
            {
                row=grid;
                collum=number-(grid-1)*(grid-1);
            }
        }

        cout<<"Case "<<times<<": "<<row<<" "<<collum<<endl;
        times++;
    }
}
