#include <stdio.h>
#include <math.h>


int main(void)
{
   	float n;
    	int a;
    	int b;
    	int ca; 
    	double c ; 	 
    	double f ;
    	double r ;

    //loop here

	while ( ! (scanf("%f", &n) == EOF) )
	{
		f = (floor (n/1) );
		c = (ceil (n/1) );
		r = (round (n) );	

 		a = (int) f;
		b = (int) c;
		ca= (int) r;
		printf("%d %d %d\n", a , ca , b);
	
	} 
		
	if (  scanf("%f", &n) == EOF ) {
		printf( " done\n");
	
}
        	
    // end loop here
    return 0;
}
