#include<stdio.h>
int fun(int t)
{
	int i1=1,i2=1,i;
	i = i1 + i2;
	while (i <= t)
	{
		i1 = i2;
		i2 = i;
		i = i1 + i2;
	}
	return i;
	



}
void main()
{
	int  n=0;
	printf("Input n please:");
	scanf_s("%d", &n);
	printf("n = %d, f = %d\n", n, fun(n));
}
