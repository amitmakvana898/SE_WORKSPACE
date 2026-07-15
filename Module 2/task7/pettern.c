#include<stdio.h>
#include<coino.h>
void main()
{
    for(int i = 1; i <= 5; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    getch();
}






#include<stdio.h>
#include<conio.h>

void main()
{
    for(int i = 1; i <= 5; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }

     getch();
}




#include<stdio.h>
#include<conio.h>

void main()
{
      int i, j, num = 1;

    for(i = 1; i <= 5; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%d", num);
            num++;
        }
        printf("\n");
    }

     getch();
}







#include<stdio.h>
#include<conio.h>

void main()
{
    int a=1;
    int b=0;
  
    for(int i=1;i<=5;i++)
    
        {
        for(int j=1;j<=i;j++)
        {
             printf("%d",a);
             printf("%d",b);
        }
        printf("\n");
        
       
    }


     getch();
}
