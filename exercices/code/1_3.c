#include <stdio.h>

/*print Fahrenheit-Celsius table
 * for fahr = 0, 20, ..., 300; floating-point version */
int main(){
	float fahr, celsius;
	float lower, upper, step;
	lower = 0;      /* lower limit of temperatuire scale */     
	upper = 300;    /* upper limit */     
	step = 20;      /* step size */     
	fahr = lower;     
	printf("Fahr\t\tCelsuis\n");
	while(fahr <= upper){         
		celsius = (5.0/9.0) * (fahr-32.0);         
		printf("%4.0f\t\t%7.2f\n", fahr, celsius);
		fahr = fahr + step;
	}
}
