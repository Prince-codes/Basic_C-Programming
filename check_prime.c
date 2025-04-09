/* check no. is prime or not */
#include <stdio.h>

void main()
{
    int n, c = 0, i;
    printf("enter a no.");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            c = c + 1;
        }
    }
    if (c == 2)
        printf("PRIME NO.");
    else
        printf("NOT A PRIME NO.");
}
