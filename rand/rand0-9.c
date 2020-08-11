#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main () {
   int n,i;
   int r[10]={0,0,0,0,0,0,0,0,0,0};
   time_t t;
   
   n = 10000000;
   
   /* Intializes random number generator */
   srand((unsigned) time(&t));

   /* random numbers from 0 to 99 */
   for( i = 0 ; i < n ; i++ ) {
        r[rand() % 10]+=1;
   }
   
   for (i=0; i<10; i++)
	   printf("%d = %d\n",i,r[i]);

   return(0);
}
