#include <stdio.h>
#include <conio.h>
void main()
{
	int num;
    int factorial = 1;
    int i;
	printf("Enter eny number : ");
	scanf("%d",&num);
	   
	    for(i=1; i<=num; i++)
	    {
	    	factorial=factorial*i;
	}
	printf("Factorial of given num is : %d",factorial);
	getch();
}
