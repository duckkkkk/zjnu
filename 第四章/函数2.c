#include <stdio.h>
int main ()
{
  int x,y;
	printf("x=");
	scanf("%d",&x);
	if(x<0)
	   y=-1;
	else if(x>0)
	   y=1;
	else
	   y=0;
	printf("y=%d\n",y);

	return 0;
}
