#include <stdio.h>
#include <stdbool.h>

char *bool_func(int value);

int main(){
	
	int num1, num2, value;
	printf("enter two numbers : \n");
	scanf("%d %d", &num1, &num2);
	printf("enter the value of %d + %d \n", num1, num2);
	scanf("%d", &value);
	bool result = value == num1 + num2;
	printf("%s\n", bool_func(result));
}




char *bool_func(int value){

	return value == true?"yes":"no";
}	
