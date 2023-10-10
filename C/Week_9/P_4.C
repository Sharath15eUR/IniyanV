/*Write a C program to reverse an array by swapping the elements and without using any new array.*/
#include <stdio.h>
int main() {
  int array[100], n, c;
  scanf("%d", &n); // n is number of elements in the array.
  for (c = 0; c < n; c++) {
    scanf("%d", &array[c]);
  }
int start = 0;
    int end = n - 1;

    while (start < end) {
        
        int temp = array[start];
        array[start] = array[end];
        array[end] = temp;

       
        start++;
        end--;
    }

 
 
printf("Reversed array elements are:\n");

  for (c = 0; c < n; c++) {
    printf("%d\n", array[c]);
  }
  return 0;}