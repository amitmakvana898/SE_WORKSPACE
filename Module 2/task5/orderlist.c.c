#include <stdio.h>
#include <conio.h>

void main()
{
    int Choice, quantity;
    int amount = 0;

    printf("\n========== FOOD MENU ==========\n");
    printf("\n1. Pizza - Rs.100");
    printf("\n2. Burger - Rs.50");
    printf("\n3. Pasta - Rs.70");
    printf("\n4. French Fries - Rs.50");
    printf("\n5. Noodles - Rs.70");
    printf("\n6. Fried Rice - Rs.50");
    printf("\n7. Momos - Rs.120");
    printf("\n8. Sandwich - Rs.80");
    printf("\n9. Ice Cream - Rs.50");
    printf("\n10. Cold Coffee - Rs.100");
    printf("\n0. Exit");

    printf("\n\n========== YOUR ORDER ==========\n");

    for(Choice = 1; Choice <= 10; Choice++)
    {
        printf("\nEnter Your Choice : ");
        scanf("%d", &Choice);

        if(Choice == 0)
        {
            break;
        }

        printf("Enter Quantity : ");
        scanf("%d", &quantity);

        if(Choice == 1)
        {
            printf("Pizza x %d = Rs.%d\n", quantity, quantity * 100);
            amount += quantity * 100;
        }

        if(Choice == 2)
        {
            printf("Burger x %d = Rs.%d\n", quantity, quantity * 50);
            amount += quantity * 50;
        }

        if(Choice == 3)
        {
            printf("Pasta x %d = Rs.%d\n", quantity, quantity * 70);
            amount += quantity * 70;
        }

        if(Choice == 4)
        {
            printf("French Fries x %d = Rs.%d\n", quantity, quantity * 50);
            amount += quantity * 50;
        }

        if(Choice == 5)
        {
            printf("Noodles x %d = Rs.%d\n", quantity, quantity * 70);
            amount += quantity * 70;
        }

        if(Choice == 6)
        {
            printf("Fried Rice x %d = Rs.%d\n", quantity, quantity * 50);
            amount += quantity * 50;
        }

        if(Choice == 7)
        {
            printf("Momos x %d = Rs.%d\n", quantity, quantity * 120);
            amount += quantity * 120;
        }

        if(Choice == 8)
        {
            printf("Sandwich x %d = Rs.%d\n", quantity, quantity * 80);
            amount += quantity * 80;
        }

        if(Choice == 9)
        {
            printf("Ice Cream x %d = Rs.%d\n", quantity, quantity * 50);
            amount += quantity * 50;
        }

        if(Choice == 10)
        {
            printf("Cold Coffee x %d = Rs.%d\n", quantity, quantity * 100);
            amount += quantity * 100;
        }

        if(Choice < 0 || Choice > 10)
        {
            printf("Invalid Choice!\n");
        }
    }

    printf("\n==============================");
    printf("\nTotal Bill = Rs.%d", amount);
    printf("\n==============================");

    getch();
}