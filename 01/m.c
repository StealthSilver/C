// average of three numbers

#include <stdio.h>

int main()
{

    int a, b, c;
    printf("enter a : ");
    scanf("%d", &a);

    printf("enter b : ");
    scanf("%d", &b);

    printf("enter c : ");
    scanf("%d", &c);

    float avg = (a + b + c) / 3;
    printf("the average is %f ", avg);
    return 0;
}