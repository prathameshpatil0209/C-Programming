#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter any two numbers");
	scanf("%d %d",&a,&b);
	printf("\nBefore swap a: %d b:%d",a,b);
	c=a;
	a=b;
	b=c;
	printf("\nAfter swap a: %d b:%d",a,b);
}
