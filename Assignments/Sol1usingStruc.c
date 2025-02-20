#include <stdio.h>
#include <string.h>
struct Passenger
{
    char name[50];
    int age;
    char destination[50];
}p[50];
void sort(int n)
{
    struct Passenger temp;
    for (int i=0; i<n-1; i++)
    {
        for (int j=0; j<n-i-1; j++)
        {
            if (strcmp (p[j].destination, p[j+1].destination) > 0)
            {
                temp = p[j];
                p[j] = p[j+1];
                p[j+1] = temp;
            }
        }
    }
}
void search (int n, char search_destination[50])
{
    int found=1;
    printf ("Passengers traveling to %s:\n", search_destination);
    for (int i=0; i<n; i++)
    {
        if (strcmp (search_destination, p[i].destination) == 0)
        {
            printf ("%s", p[i].name);
            found = 0;
        }
        else 
            found = 1; 
    }
    if (found)
        printf ("No passengers found");
}
int main()
{
    int n;
    char search_destination[50];
    printf ("Enter the number of passengers: ");
    scanf ("%d", &n);
    for (int i=0; i<n; i++)
    {
        printf ("Passenger %d: ", i+1);
        scanf ("%s %d %s", p[i].name, &p[i].age, p[i].destination);
    }
    sort(n);
    printf ("Sorted list (by destination):\n");
    for (int i=0; i<n; i++)
        printf ("%s %s\n", p[i].name, p[i].destination);
    printf ("Enter destination to search:");
    scanf ("%s", search_destination);
    search (n, search_destination);
    return 0;
}
