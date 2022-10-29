#include<stdio.h>
int main()
{
	int a,b;
	printf("enter two value:");
	scanf("%d %d", &a,&b);
	
	a>b?printf("%d is greater",a):printf("%d is greater",b);
	
	return 0;
}