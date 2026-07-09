#include<stdio.h>
#include<conio.h>

void main()
{
    int pizza = 100, burger = 70, coffee = 120;
    int p, b, c;
    int total = 0;

     printf("list of price\n");
     printf("pizza = 100\n");   
     printf("burger = 70\n");
     printf("Coffee = 120\n");
     

    printf("Enter Pizza Quantity : ");
    scanf("%d", &p);

    printf("Enter Burger Quantity : ");
    scanf("%d", &b);

    printf("Enter Coffee Quantity : ");
    scanf("%d", &c);

    total += p * pizza;
    total += b * burger;
    total += c * coffee;

    printf("\nTotal Amount = Rs.%d", total);

    getch();
}
