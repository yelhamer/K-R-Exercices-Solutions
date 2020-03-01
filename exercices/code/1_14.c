#include <stdio.h>
#define max 96


int mostFrequent (int frequency[max]) {
	int biggest = frequency[0];

	for (int i = 0; i < max; i++) {
		if (frequency[i] >= biggest) biggest = frequency[i];
	}

	return biggest;
}


void histoGram (int frequency[max]) {
	int maxFreq, currentFreq, i;
	
	maxFreq = mostFrequent(frequency);
	printf("\n\nHistogram of different character frequencies: \n");

	for (currentFreq = maxFreq; currentFreq >= 0; currentFreq--) {
		if ( currentFreq != 0) printf("\n%2d| ", currentFreq);
		else printf("\n  |");
		for (i = 32; i < max; i++) {
			if (currentFreq == 0) printf("__");
			else if (frequency[i] >= currentFreq) printf("* ");
			else printf("  ");
		}

	}

	printf("\n   ");
	for (i = 32; i < max; i++) printf("%2c", i);
}


int main () {
	int frequency[max], c;

	for (int i = 0; i < max; i++) frequency[i] = 0;
	printf("Input: ");
	while ((c = getchar()) != EOF && c != '\n'){
		if (c >= 97 && c <= 122) c -= 32;
		frequency[c]++;
	}

	histoGram(frequency);
	printf("\n\n");
}
