#include <stdio.h>

int main()
{
    int numberOfProducts, productNumber, quantity;
    float price, totalAmount;

    printf("Enter the number of purchased products: ");
    scanf("%d", &numberOfProducts);

    for (int i = 0; i < numberOfProducts; i++)
    {
        printf("Enter the product number: ");
        scanf("%d", &productNumber);

        printf("Enter the quantity: ");
        scanf("%d", &quantity);

        switch (productNumber)
        {
        case 1001:
            price = 1.50;
            break;
        case 1002:
            price = 2.50;
            break;
        case 1003:
            price = 3.50;
            break;
        case 1004:
            price = 4.50;
            break;
        case 1005:
            price = 5.50;
            break;
        }

        totalAmount += price * quantity;
    }

    printf("The total amount is R$%.2f\n", totalAmount);

    return 0;
}
