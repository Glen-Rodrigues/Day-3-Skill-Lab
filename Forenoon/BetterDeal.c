#include <stdio.h>
int main()
{
    int test, first_dis, second_dis;
    float first_dis_sp, second_dis_sp;
    scanf("%d", &test);
    while (test--)
    {
        scanf("%d %d", &first_dis, &second_dis);
        first_dis_sp = 100 - (100 * first_dis / 100.0);
        second_dis_sp = 200 - (200 * second_dis / 100.0);
        if (first_dis_sp < second_dis_sp)
            printf("FIRST\n");
        else if (first_dis_sp > second_dis_sp)
            printf("SECOND\n");
        else
            printf("BOTH\n");
    }
    return 0;
}
