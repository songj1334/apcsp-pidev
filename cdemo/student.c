#include <stdio.h>
#include <string.h>

struct Student {
  char fn[50];
  char ln[50];
  char age[50];
  char id[50];
};
int main()
{
  char fn[50];
  char ln[50];
  char age[50];
  char id[50];
  printf("Enter your first name: ");
  scanf("%s", fn);
  printf("Enter your last name: ");
  scanf("%s", ln);
  printf("Enter your age: ");
  scanf("%s", age);
  printf("Enter your student id: ");
  scanf("%s", id);
  printf("First name: %s\n", fn);
  printf("Last name: %s\n", ln);
  printf("Age: %s\n", age);
  printf("Student id: %s\n", id);

}
