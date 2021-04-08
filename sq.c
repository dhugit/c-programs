#include <stdio.h>
#include <math.h>

/*function definition*/
/* int isPerfectSquare(int number)
{
    int iVar;
    float fVar;
 
    fVar=sqrt((double)number);
    iVar=fVar;
 
    if(iVar==fVar)
        return 1;
    else
        return 0;
}
*/

int isPerfectSquare(int n)
{
  int i; 
  for (i=1; i*i <=n; i++) {
    // printf("i= %d", i);

    if ( ((n%i) == 0) && ((n/i) == i)) {
        // printf("found %d", n);
	return 1;
    }
  }
  return 0;
}

int main()
{
 int a,b,c,s;

 isPerfectSquare(9);

 for (a=2; a< 10000; a++)
   for (b=a+1; b<=10000; b++)
   {
	s=a*a+b*b+a*b*6;
	if (isPerfectSquare(s)) {
                c=(sqrt((double)s)-a-b)/2;
		printf("c= %d a=%d b=%d s=%d\n", c,a,b,s);
        }
   }
}	
