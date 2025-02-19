#include <stdio.h>
void compute(int score[], int n)
{
    int sum = 0, high = score[0], low = score[0];
    float avg=0;
    for (int i=0; i<n; i++)
    {
        if (high < score[i])
            high = score[i];
        if (low > score[i])
            low = score[i];
        sum += score[i];
    }
    avg = (float)sum/n;
    printf ("Highest Score: %d\n", high);
    printf ("Lowest Score: %d\n", low);
    printf ("Average Score: %.2f\n", avg);
}
int main()
{
    int n;
    printf ("Enter the no of matches:");
    scanf ("%d", &n);
    int score[n];
    printf ("Enter scores of %d matches:", n);
    for (int i=0; i<n; i++)
        scanf ("%d", &score[i]);
    compute (score, n);
    return 0;
}
