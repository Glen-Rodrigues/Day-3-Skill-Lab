#include <stdio.h>
int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main()
{
    int test, apple, orange;
    scanf("%d", &test);
    for (int i = 0; i < test; i++)
    {
        scanf("%d %d", &apple, &orange);
        int result = gcd(apple, orange);
        printf("%d\n", result);
    }
    return 0;
}
