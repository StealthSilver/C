#include <stdio.h>

int main()
{

    int card[5];

    int *ptr = &card[0];

    for (int i = 0; i < 10; i++)
    {
        printf("%d index : ", i);
        scanf("%d", (ptr + i));
    }

    return 0;
}