#include <stdio.h>

void insertionSort(int array[], int size)
{
  int i,key,j;
  for (i = 0; i < size; i++)
  {
    key = array[i];
    j = i - 1;

    while (j >= 0 && array[j] > key)
    {
      array[j + 1] = array[j];
      j = j -1 ;
    }
    array[j + 1] = key;
  }
}

void print_array(int *array, int size)
{
  int i;
  for (i = 0; i < size; i++)
  {
    printf("%d ",array[i]);
  }
}

int main()
{
   int array[] = { 12, 11, 13, 5, 6, 4 };
   int n = sizeof(array) / sizeof(array[0]);

   insertionSort(array, n);
   print_array(array, n);
   return 0;
}
