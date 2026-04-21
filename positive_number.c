//find the given number is perfect or not 
 #include<stdio.h>
 #include<conio.h>
 int main()
{
	int n,i,s=0;
	printf("Enter any number ");
	scanf("%d",&n);
	for(i=1;i<n;i++){
		if(n%i==0){
			s=s+i;
		}
		
		
	}
	if(s==n)
	{
		printf("%d this is a positive number  ",n);
	}
}
 
