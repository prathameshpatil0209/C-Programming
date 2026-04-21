#include<stdio.h>
int main ()
{
	int heigth,base,area;
	printf("\nEnter the heigth and base of a triangle :");
	scanf("%d %d",&heigth,&base);
	area=0.5*base*heigth;
	printf("\n Area of triangle is %d",area);
}
