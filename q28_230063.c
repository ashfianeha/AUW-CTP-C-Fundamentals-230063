#include <stdio.h>

int main()
{
    int num;

    scanf("%d", &num);

    if(num >= 1 && num <= 100)
    {
        printf("In range\n");
    }
    else
    {
        printf("Out of range\n");
    }

    return 0;
}
