#include<stdio.h>
#include<conio.h>
int main(){
	FILE *fptr;
	char c;
	int l=0;
	fptr=fopen("filehandling2.txt","r");
	printf("\n line the text: ");
	c=fgetc(fptr);
	while(!feof(fptr)){
		printf("%c",c);
		c=fgetc(fptr);
		l++;
	}
	printf("length is %d",l);
	fclose(fptr);
	
	
	
	
}
