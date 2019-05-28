#include <stdio.h>

int main()
{
  int a, d, e;
  int* ptrtoa;

  ptrtoa = &a;

  a = 5;
  printf("The value of a is %d\n", a);

  *ptrtoa = 6;
  printf("The value of a is %d\n", a);

  d = 7;
  printf("The value of d is %d\n", d);

  *ptrtoa = 9;
  printf("The value of d is %d\n", d);

  e = 4;
  printf("The value of e is %d\n", e);

  *ptrtoa = 11;
  printf("The value of e is %d\n", e);

  e = a;
  a = d;
  d = e;

  printf("The value of ptrtoa  is %d\n", ptrtoa);
  printf("It stores the value %d\n", *ptrtoa);
  printf("The address of a is %d\n", &a);

  printf("The value of ptrtoa  is %d\n", ptrtoa);
  printf("It stores the value %d\n", *ptrtoa);
  printf("The address of d is %d\n", &d);

  printf("The value of ptrtoa  is %d\n", ptrtoa);
  printf("It stores the value %d\n", *ptrtoa);
  printf("The address of e is %d\n", &e);

}
