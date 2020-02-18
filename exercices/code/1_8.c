#include <stdio.h>

/* Blanks/Tabs/Lines Counter
 */
void main(){
	int c, bc, tc, nc;

	bc = tc = nc = 0;
	while((c = getchar()) != EOF){
		if(c == 32) bc++; // 32 is the ASCII value for Blank
		if(c == 9) tc++; // 9 is the ASCII value for Tab
		if(c == 10) nc++; // 10 is the ASCII value for Newline
	}

	printf("\nBlanks: %d\nTabs: %d\nLines: %d\n", bc, tc, nc);
}
