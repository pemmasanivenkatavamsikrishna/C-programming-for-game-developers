#include <stdio.h>

int main() {
  int arr[50], n, i, j, temp;
  float sum, avg;
  printf("Enter number of elements in the array: ");
  scanf("%d", &n);

  // Get input from user
  printf("Enter %d elements: ", n);
  for (i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  // Sort the array in descending order
  for (i = 0; i < n; i++) {
    for (j = i + 1; j < n; j++) {
      if (arr[i] < arr[j]) {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }

  // Find second largest and smallest elements
  int second_largest = arr[1];
  int second_smallest = arr[n-2];
  sum = second_largest + second_smallest;
  avg = sum / 2;

  // Check if the average is present in the array
  for (i = 0; i < n; i++) {
    if (arr[i] == avg) {
      printf("The average of %d and %d is %0.2f, which is present in the array.\n", second_largest, second_smallest, avg);
      return 0;
    }
  }

  printf("The average of %d and %d is %0.2f, which is not present in the array.\n", second_largest, second_smallest, avg);
  return 0;
}
