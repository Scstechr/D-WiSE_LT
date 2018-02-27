#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRAY_SIZE 10000
#define TRIAL 100000

typedef struct{
	int data[ARRAY_SIZE];
	int size;
} Array;

void process(){
	Array *array = (Array*)malloc(sizeof(Array));
	array->size = 10000;

	for(int i = 0; i < array->size; i++){
		array->data[i] = i;
	}
}

int main(){

	clock_t t1, t2;

	double sum; sum = 0;

	for(int i = 0; i < TRIAL; i++){
		t1 = clock();
		process();
		t2 = clock();

		sum += (double)(t2-t1)/CLOCKS_PER_SEC;
	}

	printf("%f\n", (double)sum / TRIAL);

	return 0;
}

