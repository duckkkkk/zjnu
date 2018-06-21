#include<stdio.h>
int main()
{
    int day=9,x1=0,x2=1;
    for(;day>0;day--)
    {
        x1=(x2+1)*2;
        x2=x1;
    }
    printf("第一天共摘桃子个数：%d\n",x1);
}


