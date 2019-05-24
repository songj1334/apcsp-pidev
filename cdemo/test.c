#include <stdio.h>

int main()
{

     for (int i = 0; i < 10000; i++)
     {
          printf("i is equal to %d\n", i);
          
          if (i > 10)
              break;
     }
}
