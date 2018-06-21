#include <stdio.h>
#include <math.h>
int main() 
{
	int a;  
    double b;  
    printf("请输入一个小于1000的正数：");  
    scanf("%d",&a);  
    if( a>0 && a<1000 )  
    {  
        b=sqrt(a);
        printf("它的平方根是：%2.0f\n",b);  
    }  
    else  
        printf("错误，请重新输入数值：");
		scanf("%d",&a);  
	    b=sqrt(a);
        printf("它的平方根是：%2.0f\n",b); 
	return 0;
}
