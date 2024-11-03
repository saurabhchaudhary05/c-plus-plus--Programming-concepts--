#include<stdio.h>
int main(){
	float *ptr;
	float pi=3.142;
	printf("%d",ptr);
	ptr=&pi;
	printf("%d",ptr);
	int *ptr=null;
	printf("%d",*ptr);
	void *p;
	char ch='A'
	float m=56.7;
	int n=100;
	p=&ch;
	printf("\n value pointer towards = %c",*(char*)p);
	p=&m;
	printf("%f",*(float*)m);
	p=&n;
	printf("%d",*(int*)p);
}
