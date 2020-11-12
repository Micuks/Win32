#include<stdio.h>
//#include<stdlib.h>
int main()
{
    const double PI=3.14159265;
    double r;
    scanf("%lf",&r);
    printf("The perimeter is %.4f, the area is %.4f.\n",2*PI*r,PI*r*r);
    //system("pause");
    return 0;
}