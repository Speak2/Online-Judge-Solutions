#include <bits/stdc++.h>
#define pi 3.14159265358979323846

using namespace std;

int main()
{
    int n,cases=1;
    cin>>n;

    while(n--)
    {
        double first,second,third;
        cin>>first>>second>>third;

        double side1,side2,side3,value_s,area_triangle,angle1,angle2,angle3;

        side1=first+second;
        side2=second+third;
        side3=first+third;

        value_s=(side1+side2+side3)/2.0;
        area_triangle=sqrt(value_s*(value_s-side1)*(value_s-side2)*(value_s-side3));

        angle1=acos((side1*side1+side2*side2-side3*side3)/(2.0*side1*side2));
        angle2=acos((side1*side1+side3*side3-side2*side2)/(2.0*side1*side3));
        angle3=acos((side2*side2+side3*side3-side1*side1)/(2.0*side2*side3));

        double area1=(first*first*angle2)/2.0,area2=(second*second*angle1)/2.0,area3=(third*third*angle3)/2.0;
        double result=area_triangle-(area1+area2+area3);

        printf("Case %d: %.10lf\n",cases,result);
        cases++;
    }
    return 0;
}
