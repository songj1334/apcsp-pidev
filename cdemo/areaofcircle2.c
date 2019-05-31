#include <stdio.h>

float areaOfcircle(float radius);

int main() 
{
  float radius;
  printf("Enter the radius: "); 
  scanf("%f", &radius);
  printf("Entered radius is: %f\n", radius);
  printf("Area of circle : %.2f\n", areaOfcircle(radius));
  return 0;
}

float areaOfcircle(float radius)
{
  float area_circle;
  area_circle = 3.14 * radius * radius;

  return area_circle;
}
