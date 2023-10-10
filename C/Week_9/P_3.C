/*Write a C program to search a given number from a sorted 1D array and display the position at which it is found using binary search algorithm. The index location starts from 1.*/
#include <stdio.h>
int main()
{
 int c, n, search,
 array[100];
 scanf("%d",&n); //number of elements in the array

 for (c = 0; c < n; c++)
 scanf("%d",&array[c]);

 scanf("%d", &search); //The element to search is read from test case.

/* Use the printf statements as below:
 printf("%d found at location %d.", search, variable_name);
 printf("Not found! %d isn't present in the list.", search);
*/
 int left = 0;
    int right = n - 1;
    int position = -1; 

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (array[mid] == search) {
            position = mid + 1; 
            break;
        }

        if (array[mid] < search) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    
    if (position != -1) {
        printf("%d found at location %d.\n", search, position);
    } else {
        printf("Not found! %d isn't present in the list.\n", search);
    }

    return 0;
}