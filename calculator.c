/*calculator for two integers entered 
to give the sum product division and remainder*/
#include <stdio.h>

int main() 
{
    int x, y, sum, product, division, rem;

    printf("Enter two integers: ");
    while (scanf("%d %d", &x, &y) != 2) 
    { 
    printf("No interger entered please repeat the process: "); 
    while (getchar() != '\n');
    }

    sum = x + y;
    product = x * y;
    division = x / y;
    rem = x % y;

    printf("Sum is: %d\n", sum);
    printf("Product is: %d\n", product);
    printf("Division is: %d\n", division);
    printf("Remainder is: %d\n", rem);

    return 0;
}
    