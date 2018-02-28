#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>

#define ARRAY_SIZE 10000
#define TRIAL 100000

typedef struct{
	int data[ARRAY_SIZE];
	int size;
} Array;

struct timeval s, e;

double process(){

	gettimeofday(&s, NULL);

	Array *array = (Array*)malloc(sizeof(Array));
	array->size = 10000;

	for(int i = 0; i < array->size; i++){
		array->data[i] = i;
	}

	gettimeofday(&e, NULL);

	return (e.tv_sec - s.tv_sec) + (e.tv_usec - s.tv_usec)*1.0E-6; 

}

int main(){

	
	double sum; sum = 0;

	for(int i = 0; i < TRIAL; i++){
		sum += process();
	}

	printf("%lf\n", (double)sum / TRIAL);

	return 0;
}

