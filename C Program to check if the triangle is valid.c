#include <stdio.h>
#include <stdlib.h>

void main ()
{
    int a1, a2, a3, num;

    printf("Enter three angles of triangle: \n");
    scanf("%d%d%d", &a1, &a2, &a3);

    num = a1 + a2 + a3;

    if (num == 180 && a1 > 0 && a2 > 0 && a3 > 0)
        printf("Triangle is valid");
    else
        printf("Triangle is not valid");

    getch();

}
