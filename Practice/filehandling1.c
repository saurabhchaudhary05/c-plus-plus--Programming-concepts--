#include<stdio.h>
#include<conio.h>
int main(){
	FILE *fptr;
	char s[70];
	fptr=fopen("filehandling.txt","w");
	printf("\n enter the text: ");
	gets(s);
	fputs(s,fptr);
	fclose(fptr);
	fptr=fopen("filehandling.txt","r");
	printf("\n enter the text: ");
	while(!feof(fptr)){
		fgets(s,30,fptr);
		printf("%s",s);
		
	}
	fclose(fptr);
	
	
	
}
