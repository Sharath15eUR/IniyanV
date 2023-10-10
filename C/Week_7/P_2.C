#include <stdio.h>
int main()
{
    int matrix[20][20];
    int i,j,r,c;

    scanf("%d",&r); //Accepts number of rows
    scanf("%d",&c); //Accepts number of columns 

    for(i=0;i< r;i++) //Accepts the matrix elements from the test case data
    {
        for(j=0;j< c;j++)
        {
            scanf("%d",&matrix[i][j]); 
        }
    }
/*Complete the code to print the sum of each rows. Use the printf() statement as
 printf("%d\n",sum); Where sum is the sum of a row. 
*/
 for (i = 0; i < r; i++) {
        int sum = 0; // Initialize the sum for each row to zero
        for (j = 0; j < c; j++) {
            sum += matrix[i][j]; // Add each element to the sum
        }
        printf("%d\n", sum); // Print the sum of the current row
    }

    return 0;
}