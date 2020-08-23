#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc, cs = 0;
    double a, b, c, res, l, w, x;
    scanf(" %d", &tc);
    while(tc--) {
        scanf(" %lf %lf", &l, &w);
        a = 12.0;
        b = -4.0 * (l+w);
        c = l*w;
        x = (-b - sqrt (b*b - 4.0*a*c)) / (2.0*a);
        res = (l - 2*x) * (w - 2*x) * x;
        printf ("Case %d: %lf\n", ++cs, res);
    }
    return 0;
}
