#include<stdio.h>
float interest;
float calcint(float princ, float rate, float years ){
	interest = princ * rate/100 * years;
	return interest;
}
float updatebal(float currentbal, float interest){
	float newbal = currentbal + interest;
	return newbal;
}
int main(){
	float princ = 5000.0;
	float rate = 10;
	float years = 10;
	float bal = updatebal(princ, calcint(princ,rate,years));
	printf("%.2f", bal);
}
