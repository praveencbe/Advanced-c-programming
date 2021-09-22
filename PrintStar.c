/*
 * Author: PraveenKumar A (a.praveenkumar.ece@gmail.com)
 * Purpose: C Program to print star triangle  
 * Language:  C
 * Created:  22-09-2021
 */
#include<stdio.h>
#include<conio.h>

void main()
{
int i,j,k;
for(i=1; i<=5; i++)
{
for(j=4; j>=i; j--)
{
printf(" ");
}
for(k=1; k<=(2*i-1); k++)
{
printf("*");
}
printf("\n");
}
getch();
}
/* output:
    *
   ***
  *****
 *******
*********


...Program finished with exit code 0
Press ENTER to exit console.
*/
