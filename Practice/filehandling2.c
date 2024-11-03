#include<stdio.h>
#include<conio.h>
int main(){
	FILE *fptr;
	char ch;
	fptr=fopen("filehandling2.txt","w");
	printf("\n enter the text: ");
	ch=getchar();
	while(ch!='A'){
		putc(ch,fptr);
		ch=getchar();
	}
	fclose(fptr);
	
	
	
	
}
