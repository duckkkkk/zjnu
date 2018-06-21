#include <stdio.h>
int main(){
	int a,b,c,i;
	double sum=0;
	a=2,b=1;
	for(i=0;i<20;i++){
		sum+=1.0*a/b;
		c=b;
		b=a;
		a=a+c;	
	}
	printf("%.2lf\n",sum);
	return 0;
}
