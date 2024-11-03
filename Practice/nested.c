#include<stdio.h>
int main(){
	int i,j,k;
	printf("enter the number :");
	scanf("%d",&k);
	printf("the tables from 1 to %d: \n",k);
	for(i=0;i<10;i++){
		for(j=i*10+1;j<10*(i+1)+1;j++){
			printf(" %d ",j);
		}
		printf("\n");
	}
	return 0;
}
