#include <stdio.h>
int main()  
{void move(int [20],int,int); 
 int number[20],n,m,i;
 printf("How many numbers?");
 scanf("%d",&n);
 printf("Input %d numbers:\n",n);
 for (i=0;i<n;i++)
   scanf("%d",&number[i]);
 printf("How many places do you want to move?");
 scanf("%d",&m);
 move(number,n,m);
 printf("Now,the order is:\n");
 for (i=0;i<n;i++)
   printf("%d  ",number[i]);
 printf("\n");
 return 0;
}
void move(int array[20],int n,int m)   
 {int *p,array_end;
  array_end=*(array+n-1);
  for (p=array+n-1;p>array;p--)
    *p=*(p-1);
  *array=array_end;
  m--;
  if (m>0) move(array,n,m);  
 }
