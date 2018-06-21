#include<stdio.h>
#define pi 3.1415926
void main()
{
 float r,s;
 printf("请输入圆的半径:");
 scanf("%f",&r);
 s=pi*r*r;
 printf("圆周率为：%9.7f，圆的半径为：%f\n圆的面积为：%f\n",pi,r,s);
 return 0;
}
