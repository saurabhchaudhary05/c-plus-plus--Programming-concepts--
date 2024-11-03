#include<stdio.h>
#include<stdlib.h>
int main(){
	int *p,n,i;
	printf("\n enter the value of n: ");
	scanf("%d",&n);
	p=(int*)malloc(n*sizeof(int));
	if(p==NULL){
		printf("\nmemory could not be allocated");
		exit(1);
	}
	else{
		printf("\nmemory allocation successfull");
		printf("\nenter values: ");
		for(i=0;i<n;i++){
			scanf("%d",(p+i));
		}
		printf("\n entered values are :");
		for(i=0;i<n;i++){
			printf("%d",*(p+i));
		}
	}
	
}
