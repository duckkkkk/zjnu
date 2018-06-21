#include<stdio.h>
int pow(int n, int m)
{
    int i, a = 1;
    for (i = 0; i < m; ++i){
        a *= n;
    }
    return a;
}
int main()
{
    int n,a,sn;
    int m;
    printf("ÊäÈë a,n:\n");
    scanf("%d,%d",&a,&n);
    for(m=0,sn=0;m<=(n-1);)
    {
        sn=sn+(n-m)*a*pow(10,m);
        //printf ("%d\n", (n-m)*a*pow(10,m));
        m++;
    }
    printf("sn=%d",sn);
   return 0;
}
