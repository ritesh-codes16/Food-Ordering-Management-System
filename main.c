#include <stdio.h>

struct Food
{
    int id;
    char name[50];
    float price;
};

int main()
{
    struct Food menu[5] =
    {
        {1, "Pizza", 199.00},
        {2, "Burger", 99.00},
        {3, "Pasta", 149.00},
        {4, "Sandwich", 79.00},
        {5, "French Fries", 69.00}
    };

    int choice, quantity;
    float total = 0;

    printf("=====================================\n");
    printf("     FOOD ORDERING MANAGEMENT SYSTEM\n");
    printf("=====================================\n\n");

    printf("----------- FOOD MENU --------------\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d. %-15s Rs. %.2f\n",
               menu[i].id,
               menu[i].name,
               menu[i].price);
    }

    printf("\nEnter food ID: ");
    scanf("%d", &choice);

    if (choice < 1 || choice > 5)
    {
        printf("\nInvalid food ID!\n");
        return 0;
    }

    printf("Enter quantity: ");
    scanf("%d", &quantity);

    if (quantity <= 0)
    {
        printf("\nInvalid quantity!\n");
        return 0;
    }

    total = menu[choice - 1].price * quantity;

    printf("\n=====================================\n");
    printf("              BILL\n");
    printf("=====================================\n");
    printf("Food     : %s\n", menu[choice - 1].name);
    printf("Price    : Rs. %.2f\n", menu[choice - 1].price);
    printf("Quantity : %d\n", quantity);
    printf("-------------------------------------\n");
    printf("Total    : Rs. %.2f\n", total);
    printf("=====================================\n");
    printf("       Thank You! Visit Again!\n");

    return 0;
}