/*Write a Program to find the sum of all even numbers from 1 to N where the value of N is taken as input. [For example when N is 10 then the sum is 2+4+6+8+10 = 30]*/
#include <stdio.h>  
void main()
{
int N, sum=0; 
scanf("%d", &N); /* The value of N is taken from the test cases */

/* Complete the program. Please use the printf statement given below to 
exactly match your output with the test cases.

printf("Sum = %d", sum);

*/
{
  int i;
    scanf("%d", &N);
    	for(i=2; i<=N; i+=2)
    	{
        	sum += i;
    	}
}
    printf("\nSum = %d", sum);
}