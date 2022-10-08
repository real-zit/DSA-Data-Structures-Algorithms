// ***The array must be sorted***//

#include <stdio.h>

int BinarySearch(int array[], int searchKey, int low, int high) {
  while (low <= high) {
    int mid = (low + high) / 2;

    if (array[mid] == searchKey){
      return mid;
    }
    else if (array[mid] < searchKey)
      {
          low = mid + 1;
    }   
    else
    {
      high = mid - 1;
  }
}
  return -1;
}

int main() {
    
  int array[] = { 12, 34, 41, 54, 59, 75};
  int numOfElements = sizeof(array) / sizeof(array[0]);
  int searchKey = 75;
  int result = BinarySearch(array, searchKey, 0, numOfElements - 1);
  if (result == -1)
    printf("Not found");
  else
    printf("Element is found at index  %d", result);
  return 0;
}
