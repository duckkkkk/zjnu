#include"stdio.h"
#include"math.h"
void main()
{
float x1=1,x2,a;
printf("input a\n");
scanf("%f",&a);
x2=a;
while(fabs(x1-x2)>=1e-5)
{
x1=x2;
x2=(x1+a/x1)/2;
}
printf("%f,%f",x1,x2);
}
