#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 10

typedef struct{
	int array[ARRAY_SIZE];
	int size;
} Array;

void print(Array *array){
	printf("[");
	for(int i = 0; i < array->size; i++){
		printf("%d,", array->array[i]);
	}
	printf("\b]\n");
}

int main(void){

	Array *array = (Array*)malloc(sizeof(Array));
	array->size = ARRAY_SIZE;

	for(int i = 0; i < array->size; i++){
		array->array[i] = i;
	}

	print(array);
	free(array);
	return 0;
}
