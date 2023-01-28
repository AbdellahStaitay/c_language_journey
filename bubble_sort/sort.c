#include <stdio.h>

int main(void){
	int tmp;
	int numbers[] = {7,9,5,2,8,3,4,1,6};
	for (int i = 0; i < (sizeof(numbers) / sizeof(numbers[0])); i++){
		for (int j = 0; j < (sizeof(numbers) / sizeof(numbers[0])) ; j++){
			if (numbers[j] > numbers[j+1]) {
				tmp = numbers[j];
				numbers[j] = numbers[j+1];
				numbers[j+1] = tmp;
			}
		}	
	}
	for (int num = 0; num < (sizeof(numbers) / sizeof(numbers[0])); num++){
		printf("%d,", numbers[num]);
	}
	printf("\n");
	return 0;
}	
			
