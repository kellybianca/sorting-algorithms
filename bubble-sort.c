#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b)
{
  int aux = *a;
  *a = *b;
  *b = aux;
}

void printArray(int array[], int size)
{
  int i;
  for (i = 0; i < size; i++)
  {
    printf("%d ",array[i]);
  }
}

void ascendingOrder(int array[], int size)
{
  int i,j;

  for (i = 0; i < size - 1; i++)
  {
    for (j = 0; j < size - 1; j++)
    {
      if(array[j] > array[j + 1])
      {
        swap(&array[j], &array[j+1]);
      }
    }
  }
}

void descendingOrder(int array[], int size)
{
  int i, j;

  for (i = 0; i < size - 1; i++)
  {
    for (j = 0; j < size - 1; j++)
    {
      if(array[j+1] >= array[j])
      {
        swap(&array[j+1], &array[j]);
      }
    }
  }
}

int main()
{
  int n;
  scanf("%d",&n);
  int a[n],i,j, aux;

  for (i = 0; i < n; i++)
  {
    scanf("%d",&a[i]);
  }

  printf("Ascending order\n");
  ascendingOrder(a, n);
  printArray(a, n);
  
  printf("\nDescending order\n");
  descendingOrder(a, n);
  printArray(a, n);

  return 0;
}
