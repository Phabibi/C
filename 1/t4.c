#include <stdio.h>
#include <math.h>


int main(void)
{
   	float n;
    	int a;
    	int b;
    	int ca;
	int g=0; 
    	double c ; 	 
    	double f ;
    	double r ;

    //loop here
	g = 5;
        g = scanf("%f", &n);
	if ( g == 0 ) {
	printf ("scanf error: (%d)\n", g);
	}
	else {

        	f = (floor (n/1) );
        	c = (ceil (n/1) );
		r = (round (n) );	

		a = (int) f;
		b = (int) c;
		ca= (int) r;
		printf("%d %d %d\n", a , ca , b);

}
        	
    // end loop here
    return 0;
}
