#include <stdio.h>
int main()
{
    for (int i = 0; i > -1; i++)
    {
        if ( i % 2 == 0)
        {
           printf("This number is even %d\n", i);
        }
        if (i > 100)
            break;
    }
}
