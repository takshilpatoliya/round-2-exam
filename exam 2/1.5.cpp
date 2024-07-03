#include<stdio.h>
 
 main()
 {
 int r,c;
 	
 	for(r=1;r<=5;r++)
 	{
 		
	   for (c=1;c<=r;c++)
 		{
 			printf("%d ",c);
		}
		if (c%2==1)
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
		printf("\n");
    }
 }