#include <stdio.h>

/*print Fahrenheit-Celsius table
 * for fahr = 0, 20, ..., 300; floating-point version */
int main(){
	float fahr, celsius;
	float lower, upper, step;
	lower = -17.78;      /* lower limit of temperatuire scale */     
	upper = 148.89;    /* upper limit */     
	step = 11.11;      /* step size */     
	celsius = lower;     
	printf("Celsius\t\tFahr\n");
	while(celsius <= upper){         
		fahr = ((9.0/5.0) * celsius) + 32.01;         
		printf("%7.2f\t\t%4.0f\n", celsius, fahr);
		celsius = celsius + step;
	}
}
