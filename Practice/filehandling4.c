#include<stdio.h>
#include<conio.h>
int main(){
	FILE *fp1,*fp2;
	char str1[20],str2[20],c;
	printf("enter first filename");
	gets(str1);
	printf("enter second filename");
	gets(str2);	
	fp1=fopen(str1,"r");
	fp2=fopen(str2,"w");
	while(c=fgetc(fp1)!=EOF){
		fputc(c,fp2);
		
	}
	fclose(fp1);
	fclose(fp2);
	
	
}
