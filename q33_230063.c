#include <stdio.h>

int main()
{
    float temperature;

    printf("Enter temperature: ");
    scanf("%f", &temperature);

    if (temperature < 20)
    {
        printf("Cold\n");
    }
    else if (temperature <= 30)
    {
        printf("Warm\n");
    }
    else
    {
        printf("Hot\n");
    }

    return 0;
}
