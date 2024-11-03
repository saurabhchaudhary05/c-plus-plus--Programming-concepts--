#include<stdio.h>
void factorial(int);
void circle(float);
int main(){
	int a,c;
	float b;
	
	scanf("%d %f",&a,&b);
	factorial(a);
	printf("\n");
	circle(b);
	
}
void factorial(int a){
	int i;
	int mul=1;
	for (i=a;i>=1;i--){
		mul=mul*i;
	}
	printf("%d",mul);
}

void circle(float b){
	printf("%f",3.14*b*b);
}
