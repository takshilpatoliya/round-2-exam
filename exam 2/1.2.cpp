#include <stdio.h>

main()
{
	int n;
	
	printf("Enter your number = ");
	scanf("%d",&n);
	
	int i=n%10;
	
	while(n>=10)
	{
		n/=10;
	}
	int sum=n+i;
	
	printf("the number of the digits is  = %d\n",sum);
}

