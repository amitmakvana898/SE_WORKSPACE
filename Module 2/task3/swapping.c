#include<stdio.h>
#include<conio.h>
void main()
{
    int a=5;
    int b=8;
    printf("original vlaue=%d,=%d\n",a,b);
     a=a-b;  
     b=a+b; 
     a=b-a;  
     
    printf("swapping value is = %d,= %d",a,b);
    getch();
}
