#include<stdio.h>

int days(int y,int m,int d)

{int i,a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};

 if(y<1||m<1||d<1||d>a[m]+(y%4==0&&y%100>0||y%400==0))

 {printf("%d-%d-%d����һ����Ч������!\n",y,m,d);

  return -1;

 }

 for(i=1;i<m;i++)

d+=a[i];

 return d;

}

int main()

{int year,month,day,answer;

 printf("������һ������yyyy-mm-dd\n");

 scanf("%d-%d-%d",&year,&month,&day);

 answer=days(year,month,day);

 if(answer>0)

printf("%d-%d-%d �Ǹ���ĵ� %d ��.\n",year,month,day,answer);

 getch();

return 0;

}
