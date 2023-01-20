#include <stdio.h>

int main(void)
{
	int first, second;
	char operation;

	printf("enter the operation : ");
	scanf("%c", &operation);

	printf("enter the numbers : ");
	scanf("%d %d", &first,&second);



	//printf("%c\n", operation);
	switch (operation)
	{	
		case '+' :
			printf("the value of addition is : %d \n" , first + second );
			break;
		case '-' :
			printf("the value of subtraction is : %d \n" , first - second );	
			break;
		case '*' :
			printf("the value of multiplication is : %d \n" , first * second);
			break;
		case '/' :
			printf("the value of division is : %f \n" , first * 1.0 / second);
			break;
		default :
			printf("wrong input\n");	
			
	
	
	
	
	
	
	}
	return 0;
	
}	
