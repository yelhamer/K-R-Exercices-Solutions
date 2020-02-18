#include <stdio.h>
#define size 256

int main(){
	int c, o = c + 1;
	while((c = getchar()) != EOF){
		if(c != 32 || c != o){
			printf("%c", c);
		}
		o = c;
	}
}
