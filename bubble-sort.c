#include <stdio.h>

void bubble(int *array, int size)
{
  int i,j,aux;
  for (i = 0; i < size-1; i++)
  {
    for (j = 0; j < size-1; j++)
    {
      if(array[j] > array[j+1])
      {
        aux = array[j];
        array[j] = array[j+1];
        array[j+1] = aux;
      }
    }
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
  int array[] = {64, 34, 25, 12, 22, 11, 90};
  int n = sizeof(array)/sizeof(array[0]);
  bubble(array, n);
  printf("Sorted array: \n");
  print_array(array, n);
  return 0;
}
