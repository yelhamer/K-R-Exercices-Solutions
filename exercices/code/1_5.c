#include <stdio.h>

int main(){
	int fahr, i;

	printf("Celsius\t\tFahr\n");
	for(fahr = 300; fahr >= 0; fahr -= 20){
		printf("%6.2f\t\t%4d\n", (5.0/9.0) * (fahr-32), fahr);
	}
}
