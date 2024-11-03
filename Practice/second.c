#include<stdio.h>
int main(){
	const int r=2;
	float simple_interest,p,t;
	printf("enter the value of p and t :");
	scanf("%f %f",&p,&t);
	
	simple_interest=(p*r*t)/100;
	printf("simple interest====%f",simple_interest);
}
    
    


