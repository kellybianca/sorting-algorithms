#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b)
{
  int aux = *a;
  *a = *b;
  *b = aux;
}

int partition(int array[], int low, int high)
{
  int pivot = array[high], j;
  int i = (low - 1);

  for ( j = low; j <= high - 1 ; j++)
  {
    if(array[j] <= pivot)
    {
      i++;
      swap(&array[i], &array[j]);
    }
  }
  swap(&array[i+1], &array[high]);
  return (i+1);
}

void quickSort(int array[], int low, int high)
{
  if(low < high)
  {
    int pi = partition(array, low, high);

    quickSort(array, low, pi -1);
    quickSort(array, pi +1 , high);
  }
}

void printArray(int array[], int size)
{
  int i;
  for (i = 0; i < size; i++)
  {
    printf("%d ",array[i]);
  }
}
int main()
{
  int n, i;
  scanf("%d",&n);
  int array[n];

  for (i = 0; i < n; i++)
  {
    scanf("%d",&array[i]);
  }


  quickSort(array, 0 , n - 1);
  printf("Numbers sorted\n");
  printArray(array, n);
  return 0;
}
