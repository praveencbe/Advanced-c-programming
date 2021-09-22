/*
 * Author: PraveenKumar A (a.praveenkumar.ece@gmail.com)
 * Purpose: C Program to print diagonal elements of a Matrix 
 * Language:  C
 * Created:  22-09-2021
 */
  
#include<stdio.h>

int main()
{
    int array1[10][10],i,j,m,n,sum = 0;

    printf("Enter no. of rows :: ");
        scanf("%d", &m);
        printf("\nEnter no. of cols :: ");
        scanf("%d",&n);
        printf("\nEnter values to the matrix :: \n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                 printf("\nEnter a[%d][%d] value :: ",i,j);
                 scanf("%d", &array1[i][j]);
        }
    }

    printf("\nThe Diagonals elements of a matrix are :: \n\n");

    /*check condition to print diagonals, matrix must be square matrix*/
    if(m==n)
    {
            /*print diagonals*/
            for(i=0;i<m;i++)
            {
                for(j=0;j<n;j++)
                {

                    if(i==j)
                        printf("\t%d", array1[i][j]);    /*print elements*/
                    else
                        printf("\t");   /*print space*/
                }
                printf("\n\n");   /*after each row print new line*/
            }
    }
    else
    {
        printf("\nMatrix is not a Square Matrix.");
    }

    return 0;
}
/* output:

Enter no. of rows :: 3

Enter no. of cols :: 3

Enter values to the matrix :: 

Enter a[0][0] value :: 1

Enter a[0][1] value :: 2

Enter a[0][2] value :: 3

Enter a[1][0] value :: 4

Enter a[1][1] value :: 5

Enter a[1][2] value :: 6

Enter a[2][0] value :: 7

Enter a[2][1] value :: 8

Enter a[2][2] value :: 9

The Diagonals elements of a matrix are :: 

        1

                5

                        9



...Program finished with exit code 0
Press ENTER to exit console.
*/
