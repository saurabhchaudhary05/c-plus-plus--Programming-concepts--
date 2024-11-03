#include<stdio.h>
#include<stdlib.h>
int main(){
	int *p,n,i,sum=0;
	printf("\n enter the value of n: ");
	scanf("%d",&n);
	p=(int*)calloc(n*sizeof(int));
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
			printf(" \n%d",*(p+i));
		}
		for(i=0;i<n;i++){
			sum=sum+*(p+i);
		}
		printf("\nsum=%d",sum);
		free(p);
	}
	
}
