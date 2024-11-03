#include<stdio.h>
#include<conio.h>
int main(){
	FILE *ptr;
	ptr=fopen("k123dj.txt","w");
	if(ptr==NULL){
		printf("fiel not created");
	}
	else{
		printf("file created successfully");
		fclose(ptr);
		getch();
	}
}
