#include <stdio.h>
#include <math.h>


/*  to compile
 *  cc sq.c -lm 
 *
 *  to run:
 *  ./a.out
 *  or ./a.out > sq.out
 *  cat sq.out |awk {'print $2'}|sort -n|uniq -c|less 
 */

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

/* int isPerfectSquare(int n)
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
*/

int isPerfectSquare(int x)
{
 long left=1, right=x;

 while (left <=right)
 {
    long mid = (left + right)/2;
    if (mid*mid == x)
    {
	return 1;
    }

    if (mid*mid < x)
    {
       left = mid +1;
    }
    else
    {
	right=mid-1;
    }
  }
  return 0; 
}

int main()
{
 long int a,b,c,s;

 for (a=90000; a< 100000; a++)
   for (b=a+1; b<=100000; b++)
   {
	s=a*a+b*b+a*b*6;
	if (isPerfectSquare(s)) {
                c=(sqrt((double)s)-a-b)/2;
		printf("c= %d a=%d b=%d s=%d\n", c,a,b,s);
        }
   }
}	
