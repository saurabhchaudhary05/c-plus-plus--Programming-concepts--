#include<stdio.h>
int main(){
	int a=10,b=20;
	int *p,*q;
	printf("\n%d",p);
	p=&a;
	q=&b;
	printf("\n%d",p);
	printf("%d",&a);
	printf("%d",*p);
	*p=*p*20;
	printf("\n%d",a);
	printf("\n%u",&p);
	printf("\n%u",++p);
	printf("\n%u",p);
	printf("\n%u",p++);
	printf("%u",p);
}
