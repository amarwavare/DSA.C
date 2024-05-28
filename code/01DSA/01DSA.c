// Print numbers from 1 to 10
#include <stdio.h>
#include <time.h>

int main()
{
   printf("Namaste C");
   clock_t begin = clock();
   int i;

   for (i = 1; i < 100000; ++i)
   {
      printf("%d ", i);
   }
   clock_t end = clock();
   double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
   printf("Time spent: %f seconds\n", time_spent);
   return 0;
}
