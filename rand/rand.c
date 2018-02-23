#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main () {
   int i, n, r1,r2,count=0;
   time_t t;
   
   n = 1000000000;
   
   /* Intializes random number generator */
   srand((unsigned) time(&t));

   /* random numbers from 0 to 99 */
   for( i = 0 ; i < n ; i++ ) {
        r1=rand() % 100;
        r2=rand() % 100;
       //printf("%d\n", r);
       if ( abs(r1-r2) > 50 )  count++  ;
       //if ( r1 < 50 )  count++  ;
   }
   
   printf("count=%d\n", count);
   return(0);
}
