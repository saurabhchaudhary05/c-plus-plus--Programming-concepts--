#include<stdio.h>
void square(int *);
int main(){
	int a=9;
	int *ptr;
	ptr=&a;
	square(&a);
}
void square(int *b){
	*b=*b * *b;
	printf("%d",*(int*)b);
}
