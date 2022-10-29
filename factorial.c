#include<stdio.h>
int main()
{
int i=2;
int n;
int fact = 1;
 
 printf("enter a value of n:");
 scanf("%d",&n);
 
 while(i<=n)
 {
 	fact = fact*i;
 	i++;
}

	return 0;
}