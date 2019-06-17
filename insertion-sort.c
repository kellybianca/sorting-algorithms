#include <stdio.h>
#include <stdlib.h>

void printArray(int array[], int size)
{
  int i;
  for (i = 0; i < size; i++)
  {
    printf("%d ",array[i]);
  }
}

void insertionSort(int array[], int size)
{
  int anterior, atual, i;

  for (i = 1; i < size; i++)
  {
    atual = array[i];
    anterior = i - 1;

    while (anterior >= 0 && array[anterior] > atual)
    {
      array[anterior + 1] = array[anterior];
      anterior--;
    }
    array[anterior + 1] = atual;
  }
}

int main()
{
  int size;
  scanf("%d",&size);
  int a[size], i;

  for (i = 0; i < size; i++)
  {
    scanf("%d",&a[i]);
  }

  insertionSort(a, size);
  printArray(a, size);
}

