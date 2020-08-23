#include <bits/stdc++.h>
#define pi 3.14159265358979323846

using namespace std;

int main()
{
    int n,q;
    cin>>n;
    for(q=1;q<=n;q++)
    {
        int numbers,command,times=0;
        cin>>numbers>>command;
        printf("Case %d:\n",q);
        deque <int> all;
        while(command--)
        {
            string name;
            int data;
            cin>>name;

            if(name=="pushLeft" || name=="pushRight")
            {
                cin>>data;
                if(times>=numbers && (name=="pushLeft" || name=="pushRight"))
                    printf("The queue is full\n");
                else if(name=="pushLeft")
                {
                    all.push_back(data);
                    printf("Pushed in left: %d\n",data);
                    times++;
                }
                else if(name=="pushRight")
                {
                    all.push_front(data);
                    printf("Pushed in right: %d\n",data);
                    times++;
                }
            }
            else
            {
                int im;
                if(times<=0 && (name=="popLeft" || name=="popRight"))
                    printf("The queue is empty\n");
                else if(name=="popLeft")
                {
                    im=all.back();
                    all.pop_back();
                    printf("Popped from left: %d\n",im);
                    times--;
                }
                else if(name=="popRight")
                {
                    im=all.front();
                    all.pop_front();
                    printf("Popped from right: %d\n",im);
                    times--;
                }
            }
        }
    }
    return 0;
}
