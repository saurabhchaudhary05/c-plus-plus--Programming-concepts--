#include<stdio.h>
/*int main(){
	int dest;
	printf("enter ur choice of destination:\n ");
	printf("1. Manali\n");
	printf("2. Jaipur\n");
	printf("3. Rishikesh\n");
	printf("4. Tajmahal\n");
	printf("5. Red_fort\n");
	printf("enter the dest:\n");
	scanf("%d",&dest);
	switch(dest)
	{
		case 1: printf("going to manali\n");
				break;
		case 2: printf("going to jaipur\n");
				break;
		case 3: printf("going to rishikesh\n");
				break;
		case 4: printf("going to tajmahal\n");
				break;
		case 5: printf("going to red fort\n");
				break;
		default:
				printf("not going for picnic");
	}
}*/


/*int main(){
	int x=97;
	switch(x)
	{
		case 98:
			printf("yes");
			break;
		case 97:
			printf("no");
			break;
	}
}*/

/*int main(){
	char ch;
	float a,b,lengths,radius;
	printf("enter the perimeter:");
	scanf("%c",&ch);
	switch(ch)
	{
		case 'r':
			printf("enter the length and breadth ");
			scanf("%f %f",&a,&b);
			printf("area of rectangle=%f",a*b);
			break;
		case 's':
			printf("enter the length ");
			scanf("%f ",&lengths);
			printf("area of square=%f",lengths*lengths);
			break;
		case 'c':
			printf("enter the radius:");
			scanf("%f",&radius);
			printf("area of circle=%f",3.14*radius*radius);
			break;
		default:
			printf("invalid choice ");
	}
}*/



int main(){
	char day;
	printf("enter the day: ");
	scanf("%s",&day);
	if(day="sunday" || day="saturday")
		printf("enjoy! its a holiday ");
	else
		printf("so sad ...still have to do work");
}

int main(){
	char ch;
	printf("m. monday");
	printf("t. tuesday");
	printf("w. wednesday");
	printf("th. thursday");
	printf("f. friday");
	printf("sa. tuday");
	printf("su. sunday")
}
