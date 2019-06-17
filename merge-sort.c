#include <stdio.h>
#include <stdlib.h>

void merge(int array[], int left, int middle, int right)
{
  int i ,j,k;
  int n1 = middle - left + 1;
  int n2 = right - middle;

  int L[n1], R[n2];

  for (i = 0; i < n1; i++)
  {
    L[i] = array[left + i];
  }
  for (j = 0; j < n2; j++)
  {
    R[j] = array[middle + 1 + j];
  }

  i = 0;
  j = 0;
  k = left;

  while (i < n1 && j < n2)
  {
    if(L[i] <= R[j])
    {
      array[k] = L[i];
      i++;
    }
    else
    {
      array[k] = R[j];
      j++;
    }
    k++;
  }

  while (i < n1)
  {
    array[k] = L[i];
    i++;
    k++;
  }

  while (j < n2)
  {
    array[k] = R[j];
    j++;
    k++;
  }

}

void mergeSort(int array[], int left, int right)
{
  if(left < right)
  {
    int middle = left + (right - left) / 2;

    mergeSort(array, left, middle);
    mergeSort(array, middle+1, right);

    merge(array, left, middle, right);
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
  int n;
  scanf("%d",&n);
  int array[n],i;

  for (i = 0; i < n; i++)
  {
    scanf("%d",&array[i]);
  }

  mergeSort(array, 0 , n - 1);
  printArray(array, n);
  return 0;
}
