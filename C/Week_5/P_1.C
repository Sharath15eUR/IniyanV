/*Write a C program to check whether a given number (N) is a perfect number or not.*/
#include <stdio.h>
int main()
{
    int N; 
    scanf("%d",&N); /* An integer number taken as input from test cases */

/*Complete the program by writing the rest of the code in the space provided.
Copy and paste the printf statement given below wherever required to avoid errors.
printf("\n%d is a perfect number.",N);
printf("\n%d is not a perfect number.",N);
*/
 int rem, sum = 0, i;
 
    for (i = 1; i <= (N - 1); i++)
    {
        rem = N % i;
	if (rem == 0)
        {
            sum = sum + i;
        }
    }
    if (sum == N)
        printf("\n%d is a perfect number.",N);
    else
        printf("\n%d is not a perfect number.",N);
    return 0;
}