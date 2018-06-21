#include<stdio.h>  
#include<math.h>  
int main()  
{  
    int a,b,c,d,e,f;  
    int count=0;  
    printf("Please input a number:");  
    scanf("%d",&a);  
    if(a>9999)  
    {  
        count=5;  
    }  
    else if(a>999)  
    {  
        count=4;  
    }  
    else if(a>99)  
    {  
        count=3;  
    }  
    else if(a>9)  
    {  
        count=2;  
    }  
    else  
    {  
        count=1;  
    }  
    printf("count=%d\n",count);  
    
      b=a/10000;  
      c=(int)(a-b*10000)/1000;  
      d=(int)(a-b*10000-c*1000)/100;  
      e=(int)(a-b*10000-c*1000-d*100)/10;  
      f=(int)(a-b*10000-c*1000-d*100-e*10);  
    printf("它的每一位数字为:");
    
    switch(count)  
    {  
        case 5:printf("%d%d%d%d%d",b,c,d,e,f);  
                printf("\n逆序为:");  
                printf("%d%d%d%d%d",f,e,d,c,b);  
                break;  
        case 4:printf("%d%d%d%d",c,d,e,f);  
                printf("\n逆序为:");  
                printf("%d%d%d%d",f,e,d,c);  
                break;  
        case 3:printf("%d%d%d",d,e,f);  
                printf("\n逆序为:");  
                printf("%d%d%d",f,e,d);  
                break;  
        case 2:printf("%d%d",e,f);  
                printf("\n逆序为:");  
                printf("%d%d",f,e);  
                break;  
        case 1:printf("%d",f);  
                printf("\n逆序为:");  
                printf("%d",f);  
                break;  
        }    
    return 0;  
}  
