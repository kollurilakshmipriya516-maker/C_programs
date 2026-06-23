#include <stdio.h>

struct Item
{
    char name[20];
    int quantity;
    float price;
};

float totalAmount(struct Item item)
{
    return item.quantity * item.price;
}

int main()
{
    struct Item item;

    printf("Enter Item Name: ");
    scanf("%s", item.name);

    printf("Enter Quantity: ");
    scanf("%d", &item.quantity);

    printf("Enter Price: ");
    scanf("%f", &item.price);

    printf("Item Name : %s\n", item.name);
    printf("Total Amount = %.2f\n", totalAmount(item));

    return 0;
}
