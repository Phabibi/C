#include <stdio.h>
#include <math.h>


int  main(void)	{
	float a;
	float sum = 0.0;
	int count=0 ;
	float max = -99999;
	float min = 99999;


	while ( (scanf("%f\n", &a) != EOF ) ){

		sum+=a;
		count+=1;

		if (max < a) {
			max = a ;
		}
		if ( min > a ) {
				min = a ;
			}


	}

	printf("%.2f %.2f %.2f \n", min , max , sum/count);
	return 0;
}
