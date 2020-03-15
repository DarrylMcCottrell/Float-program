#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>



int main()
{
	double div;
	int x = 0, y = 1, n;
	double hyp, squareroot;
	double a,b,z;
	int count;

	 printf("Enter the number of trials : ");
   	scanf("%d",&x);
	 srand(time(NULL));
   count=0;
   for (int i=0; i< x; i++) {
      a = (float)rand()/RAND_MAX;
      b = (float)rand()/RAND_MAX;
      z = x*x + y*y;
	  hyp = sqrt(z);
	  
	  
      if (z<=1) count++;
      }
	div = (double) hyp/x*4;
   
   printf("Executing: %d\n",x);
   printf("Hits: %g\n", hyp);
   printf("Approximation: %f\n", div);
	
	return 0;
}