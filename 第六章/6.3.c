#include <stdio.h>
int main()
{
int a[3][3],sum=0;
int i,j;
  printf("输入一个3*3整数矩阵:\n");
  for (i=0;i<3;i++)
    for (j=0;j<3;j++)
     scanf("%3d",&a[i][j]);
  for (i=0;i<3;i++)
    sum=sum+a[i][i];
  printf("对角线元素和为%6d\n",sum);
  return 0;
}

