#include<stdio.h>
void pattern();
void repeat();
int main(){
	/*printf("Hello\n");
	pattern();
	printf("\n");
	pattern();
	printf("\n");
	printf("byee\n");
	pattern();
	printf("\n");
	pattern();*/
	printf("Hello\n");
	repeat();
	printf("byee\n");
	repeat();
}
void pattern(){
	int i;
	for(i=0;i<5;i++){
		printf("@");
	}
}

void repeat(){
	int j;
	for(j=0;j<2;j++){
		pattern();
		printf("\n");
	}
}
