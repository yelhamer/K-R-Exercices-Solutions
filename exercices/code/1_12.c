#include <stdio.h>
#define max 100

int main(){
	char words[max];
	int c, i = 0;

	while ((c = getchar()) != EOF) {
		if (c != ' ') {
			words[i] = c;
			i++;
		}
		else {
			for (int n = 0 ; n < i ; n++) {
				printf("%c", words[n]);
				words[n] = '\0';
			}
			printf("\n");
			i = 0;
		}
	}
}
