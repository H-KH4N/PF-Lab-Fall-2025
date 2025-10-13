#include <stdio.h>
int main(){
	/*int StudentAges[] = {22,23,14,15,26,17};
	printf("%d\n", StudentAges[0]);
	printf("ArrayLength = %d\n", sizeof(StudentAges)/sizeof(StudentAges[1]));
	int x;
	for(x = 0; x < 6; x++){
	printf("%d | ",StudentAges[x]);
	}
	printf("\n");
	
	char allchar[]  = {'H','E','L','L','O'};
	int i;
	for(i = 0; i < 5; i++){
	printf("%c",allchar[i]);
	}
	
	char charword[5]  = "Hello";
	printf("\n%s\n", charword);
	int l, l_freq = 0;
	for(l = 0;l < sizeof(charword)/sizeof(charword[0]);l++){
		if(charword[l] == 'l' || charword[l] == 'L'){
			l_freq += 1;
		}
	}
	printf("Frequency of 'l' = %d\n", l_freq);
	
	int userages[] = {0};
	printf("Enter 10 Students ages\n");
	int a , ncomp = 200;
	for(a = 0; a <= 9;a++){
		scanf("%d", &userages[a]);
		if(ncomp > userages[a]){
			ncomp = userages[a];
		}
	}
	printf("Least Age = %d\n",ncomp);
	
	char str[100];
	printf("Enter a string using only 'A-Z' or 'a-z'\n");
	scanf("%[A-Za-z0-9_.@#$-]", str);
	printf("Youve entered = %s", str);
	
	int empid[] = {0};
	int x;
	printf("enter employ id\n");
	for (x = 0; x <= 12; x++){
		scanf("%d", &empid[x]);
	}
	int i = 0,idcheck,flag = 0;
	printf("Enter employ id to check\n");
	scanf("%d", &idcheck);
	while(flag == 0 && i <= 12){
		for(i = 0 ; i <= 12; i++){
			if (idcheck == empid[i] ){
				flag = 1;
				printf("ID valid");
			}
		}
	}
	if (flag == 0){
		printf("ID invalid");
	}*/
	
	int stdmarks[] = {0};
	int a, avg = 0;
	printf("enter Student Marks\n");
	for (a = 0; a <= 10; a++){
		scanf("%d", &stdmarks[a]);
		avg = avg + stdmarks[a];
	}
	printf("Average Student Marks = %d", avg/10);
	return 0;
}



