#include <stdio.h>
int main()
{int i,j,min,temp,a[11];
  printf("请输入10个整数:\n");
  for (i=1;i<=10;i++)
   {printf("a[%d]=",i);
    scanf("%d",&a[i]);
   }
  printf("\n");
  printf("原来的顺序:\n"); 
  for (i=1;i<=10;i++)
    printf("%5d",a[i]);
  printf("\n");
  for (i=1;i<=9;i++)
    {min=i;
     for (j=i+1;j<=10;j++)
 if (a[min]>a[j]) min=j;
     temp=a[i];
     a[i]=a[min];
     a[min]=temp;
    }
  printf("\n后来的顺序:\n");
  for (i=1;i<=10;i++)
    printf("%5d",a[i]);
  printf("\n");
  return 0;
 }

