
#include <stdio.h>
#include <conio.h>
void main()
{
	int num,a,b,c,i;
	printf("Enter your number");
	scanf("%d",&num);
        a=0;
        b=1;
        printf("%d",a);
        printf("%d",b);
	    for(i=2;i<num;i++)
	    {
	    	c=a+b;
		    printf("%d",c);
		    a=b;
		    b=c;
	}
	getch();
}
