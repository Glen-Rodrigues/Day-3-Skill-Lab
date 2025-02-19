#include <stdio.h>
#include <string.h>
void sort(int n, char name[][50], int age[], char destination[][50])
{
	printf ("Sorted List (by destination):\n");
	for (int i=0; i<n-1; i++)
	{
		for (int j=0; j<n-i-1; j++)
		{
			if (strcmp (destination[j], destination[j+1]) > 0)
			{
				char temp_name[50], temp_destination[50];
				strcpy (temp_name, name[j]);
				strcpy (name[j], name[j+1]);
				strcpy (name[j+1], temp_name);
				int temp_age = age[j];
				age[j] = age[j+1];
				age[j+1] = temp_age;
				strcpy (temp_destination, destination[j]);
				strcpy (destination[j], destination[j+1]);
				strcpy (destination[j+1], temp_destination);
			}
		}
	}
	for (int i=0; i<n; i++)
		printf ("%s %d %s\n", name[i], age[i], destination[i]);
}
void search(int n, char name[][50], char destination[][50])
{
	int found=1;
	char search_destination[50];
	printf ("Enter destination to search: ");
	scanf ("%s", search_destination);
	printf ("Passengers traveling to %s:\n", search_destination);
	for (int i=0; i<n; i++)
	{
		if (strcmp (search_destination, destination[i]) == 0)
		{
			printf ("%s\n", name[i]);
			found=0;
		}
	}
	if (found)
		printf ("No Passengers found");
}
int main()
{
	int n;
	printf ("Enter number of passsengers: ");
	scanf ("%d", &n);
	int age[n];
	char name[n][50], destination[n][50];
	for (int i=0; i<n; i++)
	{
		printf ("Passenger %d: ", i+1);
		scanf ("%s %d %s", name[i], &age[i], destination[i]);
	}
	sort (n, name, age, destination);
	search (n, name, destination);
	return 0;
}