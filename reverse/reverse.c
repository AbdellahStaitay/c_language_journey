#include <stdio.h>
#include <string.h>
int main(void){

	char string[10];
	printf("enter a word : ");
	scanf("%s" , string);
	for (int i = strlen(string) - 1 ; i >= 0 ; i--)
		printf("%c", string[i]);
	printf("\n");

}	
