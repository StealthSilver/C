#include <stdio.h>

int main()
{

    int i = 2;
    printf("%d \n", i++); // use i and then increase (post increment)
    printf("%d \n", i);

    int j = 5;
    printf("%d \n", ++j); // increase j and then use (pre increment)
    printf("%d \n", j);

    int l = 6;
    printf("%d \n", --l); // decrease l and then use (post decrement)
    printf("%d \n", l);

    int m = 9;
    printf("%d \n", m--); // decrease m and then use (pre decrement)
    printf("%d \n", m);

    return 0;
}