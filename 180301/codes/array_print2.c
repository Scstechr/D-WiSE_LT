#include <stdio.h>

void print(int *array, int size){
	printf("[");
	for(int i = 0; i < size; i++){
		printf("%3d,", array[i]);
	}
	printf("\b]\n");
}

int main(void){

	int array[10];

	for(int i = 0; i < 10; i++){
		array[i] = i;
	}

	print(array, 10);

	return 0;
}
