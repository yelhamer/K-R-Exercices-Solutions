#include <stdio.h>
#define max 30


int maxOccurance (int length[max]) {
	int biggest = length[0];

	for (int i = 0; i < max; i++) {
		if (length[i] >= biggest) biggest = length[i];
	}

	return biggest;
}


void histoGram (int length[max]) {
	int maxRow, currentLine, i;
	
	maxRow = maxOccurance(length);
	printf("\n\nHistogram of the number of word-length occurances: \n");

	for (currentLine = maxRow; currentLine >= 0; currentLine--) {
		if ( currentLine != 0) printf("\n%2d| ", currentLine);
		else printf("\n  |");
		for (i = 1; i < max; i++) {
			if (currentLine == 0) printf("___");
			else if (length[i] >= currentLine) printf("*  ");
			else printf("   ");
		}

	}

	printf("\n 0");
	for (i = 1; i < max; i++) printf("%3d", i);
}


int main () {
	int length[max], c, wordLengthCounter = 0;

	for (int i = 0; i < max; i++) length[i] = 0;
	printf("Input: ");
	while ((c = getchar()) != EOF && c != '\n'){
		if (c != ' ' && c != '\t') 
			wordLengthCounter++;
		else {
			length[wordLengthCounter]++;
			wordLengthCounter = 0;
		}
	}

	length[wordLengthCounter]++;
	histoGram(length);
	printf("\n\n");
}





















