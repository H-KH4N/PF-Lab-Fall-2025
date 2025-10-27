#include<stdio.h>

float calctotal(float cart[], int size){
	float sum = 0;
	int x;
	for(x = 0; x < size; x++){
		sum += cart[x];
	}
	return sum;
}

void disctotal(float *total){
	if(*total > 5000.0){
		*total *= 0.9;
	}
}

void printbill(float total){
	printf("Total Bill is: %.2f\n", total);
}

int main(){
	float cart[5] = {1000.0,1000.0,1000.0,1000.0,1000.0};
	int size = 5;
	float total = calctotal(cart,size);
	disctotal(&total);
	printbill(total);
	return 0;
}
