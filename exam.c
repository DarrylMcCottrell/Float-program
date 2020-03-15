#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>



int main()
{
	double div;
	int x = 0, y = 1;
	double hyp;
	double a,b,z;
	
	
	 printf("Enter the number of trials: ");
   	 scanf("%d",&x);
	 
   	for (int i=0; i < 0; i++) {
		srand(time(NULL));
      a = (double)rand()/RAND_MAX;
      b = (double)rand()/RAND_MAX;
      z = x*x + y*y;
	  hyp = sqrt(z);
	  
	  
      if (hyp < 1){
		printf("Hits: %g\n", hyp);
	  }
	 else if(hyp >= 1){
		 continue;
	 }
      }
	div = (double) hyp/x*4;
   
   printf("Executing: %d\n",x);
   printf("Hits: %g\n", hyp);
   printf("Approximation: %f\n", div);
	
	return 0;
}