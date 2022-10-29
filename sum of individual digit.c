#include<stdio.h>
int main()
{
  int n;
  int sum = 0;
  int digit;
  printf("enter a value:");
  scanf("%d",&n);
  
  while(n!= 0)
  {
  	digit = n%10;
  	sum = sum + digit;
  	n = n/10;
  }
  printf("the sum of digit:%d",sum);
	return 0;
}
