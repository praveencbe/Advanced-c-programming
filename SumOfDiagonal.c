/*
 * Author: PraveenKumar A (a.praveenkumar.ece@gmail.com)
 * Purpose: C Program to find Sum of Diagonal Elements of a Matrix 
 * Language:  C
 * Created:  22-09-2021
 */
  
#include <stdio.h>
int main() 
{
  int i, j, rows, columns, a[10][10], Sum = 0;
  
 	printf("\n Please Enter Number of rows and columns  :  ");
 	scanf("%d %d", &i, &j);
 
 	printf("\n Please Enter the Matrix Elements \n");
 	for(rows = 0; rows < i; rows++)
  	{
   		for(columns = 0;columns < j;columns++)
    	{
      		scanf("%d", &a[rows][columns]);
    	}
  	}
   	  
 	for(rows = 0; rows < i; rows++)
  	{
   		Sum = Sum + a[rows][rows];
  	}
 
 	printf("\n The Sum of Diagonal Elements of a Matrix =  %d", Sum );

 	return 0;
}
/* output:

 Please Enter Number of rows and columns  :  3 3

 Please Enter the Matrix Elements 
10 20 30
40 50 60
70 80 90

 The Sum of Diagonal Elements of a Matrix =  150

...Program finished with exit code 0
Press ENTER to exit console.
*/
