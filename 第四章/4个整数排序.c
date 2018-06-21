#include <stdio.h>
int main()
{
 int a,b,c,d,t;
 printf("请输入四个整数:\n");
 scanf("%d %d %d %d",&a,&b,&c,&d);
 if(a<b) {t=a;a=b;b=t;}
 if(c<d) {t=c;c=d;d=t;}
 if(a<c) {t=a;a=c;c=t;}
 if(b<d) {t=b;b=d;d=t;}
 if(b<c) {t=b;b=c;c=t;}
    printf("由小到大排序后:\n");
 printf("%d %d %d %d\n",a,b,c,d);
}