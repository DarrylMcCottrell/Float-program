#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>



int main()
{

	int x = 0, y = 1, n;
	double hyp, squareroot;
	double a,b,z;
	int count;

	 printf("Enter the number of trials : ");
   	scanf("%d",&x);
	 srand(time(0));
   count=0;
   for (int i=0; i< x; i++) {
      a = (double)rand()/RAND_MAX;
      b = (double)rand()/RAND_MAX;
      z = x*x+y*y;
      if (z<=1) count++;
      }
   
   printf("Executing: %d\n",x);

	

	for (int i = 0; i < 1; i++){
		//pythagoras theorem
		hyp = x*x + y*y;
		squareroot = sqrt(hyp);
		srand(time(NULL));
		printf("Hits:");
		float random = 0;
		for( int i = 0; i < 1; ++i){
		random = (float) rand()/RAND_MAX;
		printf("%f\n", hyp);
	}
	}
	return 0;
}