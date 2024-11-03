#include<stdio.h>
void subtract();
int main(){
	long int a,b;
	scanf("%ld %ld",&a,&b);
	subtract(a,b);
	
}
void subtract(long int a,long int b){
	printf("%ld - %ld = %ld",a,b,a-b);
} 
