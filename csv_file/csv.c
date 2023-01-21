#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	FILE *file = fopen("file.csv", "a");
	char name[15];
	char number[11];
	printf("name : ");
	scanf("%s", name);
	printf("number : ");
	scanf("%s", number);

	fprintf(file,"%s,%s\n",name,number);


}
