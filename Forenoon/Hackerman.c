#include <stdio.h>
int main()
{
    int test, a, b, sum = 0;
    scanf ("%d", &test);
    while (test--)
    {
        scanf ("%d %d", &a, &b);
        sum = a + b;
        if (sum == 2 || sum == 3 || sum == 5 || sum == 7 || sum == 11)
            printf ("Alice\n");
        else
            printf ("Bob\n");
    }
}
