#include <stdio.h>
#include <conio.h>
void main()
{
	
	int n,i,flag=0;
	printf("\nEnter a positive integer: ");
	scanf("%d",&n);
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			flag=1;
			break;
		}
	}
if(n==1)
{
	printf("%d is neither prime nor composite\n",n);
}
else
{  
	if(flag==0)
	printf("%d is prime\n",n);
	else
	printf("%d is not prime\n",n);
}

}
