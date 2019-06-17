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
  for ( i = 0; i < size; i++)
  {
    printf("%d ",array[i]);
  }
}

void selectionSort(int a[], int size)
{
  int i, j, min;

  for (i = 0; i < size - 1; i++)
  {
    min = i;
    for (j = i + 1; j < size; j++)
    {
      if(a[j] < a[min])
      {
        min = j;
      }
    }
    swap(&a[min], &a[i]);
  }
}

int main()
{
    int size, i;
    scanf("%d",&size);
    int a[size];

    for (i = 0; i < size; i++)
    {
      scanf("%d",&a[i]);
    }

    selectionSort(a, size);
    printArray(a, size);
}
