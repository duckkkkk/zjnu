#include <stdio.h>
int  main()
{
int a,b,c;
int sum=0;
for(a=1;a<=20;a++)
{
for(b=1,c=1;b<=a;b++)
{
c=b*c;
}
sum+=c;
}
printf("%d",sum);
return 0;
}
