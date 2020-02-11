#include <stdio.h>

int main(){
	printf("Hello, \tWorld!\n"); //substitues the escape character with a tab (4 spaces).
	printf("Hello, \bWorld!\n"); //deletes the preceeding character. (BackSpace character)
	printf("Hello, World!\"\n"); //prints the character string terminating character.
	printf("Hello, World!\\\n"); //prints the escape character.
	printf("Hello, World!\n\n"); //newline.
	printf("Hello, \rWorld!\n"); //removes what comes after the escape character.
	printf("Hello, World!\a\n"); //produces a beep at function call.

}
