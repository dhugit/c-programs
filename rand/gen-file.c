#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//generate a txt file with million random digits
//100 digits each line

int main () {
   int n,i;
   time_t t;
   FILE *fptr;
   
   n = 1000000;
   
   /* Intializes random number generator */
   srand((unsigned) time(&t));

   /* random numbers from 0 to 99 */
   fptr=fopen("m.txt","w");
   
   if(fptr == NULL) {
	   printf("Error!");
	   exit(1);
   }


   for( i = 1 ; i <= n ; i++ ) {
        putc('0'+ (rand() % 10),fptr);
	if (i % 100 == 0)
		putc('\n',fptr);
   }
   

   fclose(fptr);

   return(0);
}
