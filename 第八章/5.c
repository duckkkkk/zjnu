# include <stdio.h>
void main()
{
int n, i, k, m, a[100];
int *p;
 p = a;
printf("请输入人数：");
scanf("%d", &n);
 for(i = 0; i < n; i++)
     a[i] = i + 1;
    i = 0; k = 0; m = 0;
while(m < n-1)
  {
   if(a[i] != 0) k++;
     if(k == 3)
    {
      a[i] = 0;
      k = 0;
      m++;
    }
   i++;
   if(i == n) i = 0;
  }
  
 while(!(*p)) p++;
 printf("最后留下的是原来第%d号的那位\n",*p);
}
