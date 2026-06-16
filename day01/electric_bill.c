#include <stdio.h>

int main()
{
    float unit, total = 0;

    printf("Enter the unit: ");
    scanf("%f", &unit);

    if (unit < 50)
    {
        total = unit * 0.75;
    }
    else if (unit < 150)
    {
        total = (50 * 0.75) + (unit - 50) * 1;
    }
    else if (unit < 300)
    {
        total = (50 * 0.75) + (100 * 1) + (unit - 150) * 1.5;
    }
    else
    {
        total = (50 * 0.75) + (100 * 1) + (150 * 1.5) + (unit - 300) * 2;
    }

    printf("Unit = %g\n", unit);
    printf("Total Bill = %g\n", total);

    return 0;
}