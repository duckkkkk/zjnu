#include <stdio.h>
int main()
{
	double k,sum,s1 = 0, s2 = 0, s3 = 0;
	for (k = 1; k <= 100; k++)
	{
	 s1 += k;
	}
	for (k = 1; k <= 50; k++)
	{
	 s2 += k*k;
	}
	for (k = 1; k <= 10; k++)
	{
	 s3 += 1/k;
	}
	sum = s1 + s2 + s3;
	printf("sum=%10.4f\n",sum);
	return 0;
}

