#include <stdio.h>

void effect(int temp)
{

    if (temp > 30)
    {
        printf("HOT");
    }
    else
    {
        printf("COLD");
    }
}

int main()
{

    int temp;
    printf("enter the temperature : ");
    scanf("%d", &temp);

    printf("the entered temp is : ");
    effect(temp);
    return 0;
}