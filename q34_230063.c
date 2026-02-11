#include <stdio.h>

int main()
{
    int age, citizenship;

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter citizenship (1 = Yes, 0 = No): ");
    scanf("%d", &citizenship);

    if (age >= 18)
    {
        if (citizenship == 1)
        {
            printf("Eligible to Vote\n");
        }
        else
        {
            printf("Not Eligible (Not Citizen)\n");
        }
    }
    else
    {
        printf("Not Eligible (Under Age)\n");
    }

    return 0;
}
