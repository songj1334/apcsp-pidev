#include <stdio.h>

int main()
{
  int a = 3;
  int b = 1;
  // if statement to test is a is equal to 0
  if (a == 0)
  {
    printf("a is equal to 0\n");
  }
  if (a != 0)
  {
    printf("a is not equal to 0\n");
  }
  if (a > b)
  {
    printf("a is greater than b\n");
  }
  if (a >= b)
  {
    printf("a is greater than or equal to b\n");
  }
  if (a == 0 && b == 0)
  {
    printf("a is equal to 0 and be is equal to 0\n");
  }
  if (a == 0 || b == 0)
  {
    printf("a is equal to 0 or be is equal to 0\n");
  }
  if (!(a == b))
  {
    printf("a is not equal to b\n");
  } 
}

