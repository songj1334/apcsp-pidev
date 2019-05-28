#include <stdio.h>
void arrayAdd( int *arr)
{
  printf("%d\n", *arr);
}
int main()
{
  int arr[100];
  for (int i = 0; i < 100; i++)
  {
    arr[i] = i*i;
    arrayAdd(&arr[i]);
  }
  return 0;
}
