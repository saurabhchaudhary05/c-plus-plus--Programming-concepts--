#include<stdio.h>
struct book{
	char name[20];
	int pages;
	float cost;
};
int main(){
	struct book b[3];
	int i;
	for(i=0;i<3;i++){
		printf("\n enter the name");
		fflush(stdin);
		gets(b[i].name);
		printf("\n enter the pages");
		scanf("%d",&b[i].pages);
		printf("\n enter the cost");
		scanf("%d",&b[i].cost);
	}
	for(i=0;i<3;i++)
	
}

