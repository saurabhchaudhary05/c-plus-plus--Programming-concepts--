#include<stdio.h>
int main(){
	int num,rev=0,rem,sum=0,sum2=0;
	printf("enter the number: ");
	scanf("%d",&num);
	int x;
	x=num;
	while(num>0){
		rem=num%10;
		num=num/10;
		rev=rev*10+rem;
		sum=sum+rem;
		sum2=sum2+rem*rem*rem;
	}
	printf("\n reverse is %d",rev);
	if(x==rev)
		printf("\n  palindrome number ");
	else
		printf("\n not palindrome ");
	printf("\nthe sum=%d",sum);
	if(sum2==x)
		printf("\n number is armstrong\n");
	else
		printf("\n not armstrong ");
}
