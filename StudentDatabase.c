
/*
 * Author: PraveenKumar A (a.praveenkumar.ece@gmail.com)
 * Purpose: Student database using c program struts
 * Language:  C
 * Created:  22-09-2021
 */  
 #include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include<string.h>

struct Student
{
	int rollno;
	char name[15];
	int marks;
	char grade;
};

int main()
{
	struct Student s1[10];
	int i, n;
	char search[15];

	/*Read student information */
	printf("How many Student Records to Store: \n");
	scanf("%d", &n);

	/*Enter student details */
	printf("Enter Student Details: \n");

	for (i = 0; i < n; i++)
	{

		printf("Rollno:" );
		scanf("%d", &s1[i].rollno);
		printf("\n");

		printf("Name: ");
		scanf("%s", s1[i].name);
		printf("\n");

		printf("Marks(out of 100):");
		scanf("%d", &s1[i].marks);
	    printf("\n");
		printf("Grade: ");

		if (s1[i].marks <= 50)
		{
			s1[i].grade = 'F';
		}
		else if (s1[i].marks > 50 && s1[i].marks <= 59)
		{
			s1[i].grade = 'C';
		}
		else if (s1[i].marks >= 60 && s1[i].marks <= 75)
		{
			s1[i].grade = 'B';
		}
		else if (s1[i].marks > 75 && s1[i].marks <= 95)
		{
			s1[i].grade = 'A';
		}
		else
		{
			s1[i].grade = 'S';
		}
		printf("%c", s1[i].grade);
		printf("\n");

	}
	printf("Enter Student Name to Search: ");
	scanf("%s", search);

	/*print the data base */
	printf("Name\t    Marks \t Grade\t \n");

	for (i = 0; i < n; i++)
	{
		if (strcmp(search, s1[i].name) == 0)
		{
			printf("%s\t %d\t %c\t", s1[i].name,s1[i].marks, s1[i].grade);
		}
		else if (strcmp(search,"all") == 0)
		{
			printf("%s\t %d\t %c\t", s1[i].name,s1[i].marks, s1[i].grade);
			printf("\n");
		}
	}
	return 0;
}
/* output:
 How many Student Records to Store: 
3
Enter Student Details: 
Rollno:14

Name: Karthikeyan

Marks(out of 100):72

Grade: B
Rollno:24

Name: Palmurugan

Marks(out of 100):81

Grade: A
Rollno:25

Name: Praveenkumar

Marks(out of 100):96

Grade: S
Enter Student Name to Search: all
Name        Marks        Grade   
Karthikeyan      72      B
Palmurugan       81      A
Praveenkumar     96      S


...Program finished with exit code 0
Press ENTER to exit console.
*/
