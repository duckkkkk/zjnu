#include<stdio.h>
void main()
{
int i,j,k;
for(i=0;i<4;i++)
{
for(j=0;j<4-i;j++)
putchar(' ');
for(k=0;k<2*i+1;k++)
putchar('*');
putchar('\n');
}
for(i=2;i>=0;i--)
{
for(j=0;j<4-i;j++)
putchar(' ');
for(k=0;k<2*i+1;k++)
putchar('*');
putchar('\n');
}
}

