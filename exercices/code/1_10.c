#include <stdio.h>
#define size 256

int main(){
	int c;

	while((c = getchar()) != EOF){
		if(c == '\t') printf("\\t");
		if(c == '\b') printf("\\b");
		if(c == '\\') printf("\\\\");
		if(c != '\t' && c != '\b' && c != '\\') printf("%c", c);
	}
}
