#include <stdio.h>
#include <string.h>

int main(void) {
	char text[] = "hello world";
	char output[30];
	int i = 0;
	int j = 0;
	for (int i, j; i < strlen(text); i++, j +=2) {
		output[j] = text[i];
		if ( output[j] != ' ' ) {
			output[j + 1] = ',';
		}else
	
		output[j+1] = text[i];			    
	}
	printf("%s", output);


}
