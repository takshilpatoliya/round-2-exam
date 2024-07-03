#include <stdio.h>

main()
{
	int marks;
	
	printf("Enter your Marks =");
	scanf("%d",&marks);
	
	(marks<=100 && marks>=90)? printf("your grade is A")
	:(marks<=89 && marks>=80)? printf("your grade is B")
	:(marks<=79 && marks>=70)? printf("your grade is C")
	:(marks<=69 && marks>=60)? printf("your grade is D")
	:(marks<=59 && marks>=40)? printf("your grade is E")
	:(marks<=40 && marks>=0)? printf(" soory you are fail")
	:printf("Please try again next time");	
}