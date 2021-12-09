#include<stdio.h>
#include<conio.h>
main()
{
	int a, b, c = 1;
	printf("Enter the number:\n");
	scanf("%d", &a);
	for(b = 1; b <= a; b++)
	{
		c = b * c;
	}
	printf(" factorial of %d is %d.", a, c);
	getch();
}
