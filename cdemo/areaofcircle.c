#include <stdio.h>

  //Function declaration
float areaOfcircle(float radius);

int main() 
{
  for (float radius = 3.5; radius<12.6; radius++)
  printf("Area of circle : %.2f\n", areaOfcircle(radius));
  return 0;
}

// function definition to calculate area of circle
float areaOfcircle(float radius)
{
  float area_circle;
  area_circle = 3.14 * radius * radius;

  return area_circle;
}
