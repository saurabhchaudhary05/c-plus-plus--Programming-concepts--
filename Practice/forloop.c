
/*int main(){
	int i;
	for(i=20;i<=60;i++){
		if(i%7!=0){
			printf("%d\n",i);
		}
	}
}*/

// C program to find LCM of two numbers


// Recursive function to return gcd of a and b
#include <stdio.h>

/*int main() {

    int n1, n2, i, gcd, lcm;

    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);

    // loop to find the GCD
    for (i = 1; i <= n1 && i <= n2; ++i) {
        
        // check if i is a factor of both integers
        if (n1 % i == 0 && n2 % i == 0)
            gcd = i;
    }

    lcm = (n1 * n2) / gcd;

    printf("The LCM of two numbers %d and %d is %d.", n1, n2, lcm);
    return 0;
}*/


int main(){
	int a,i,flag=0;
	printf("enter the number: ");
	scanf("%d",&a);
	if(a==1)
		printf("%d is neither prime nor composite \n",a);
	if(a==2)
		printf("2 is prime number\n ");

	for(i=3;i<a;i++)
	{
		if(a%i==0){
			flag=1;
			break;
		}
		
			
	}
		
	if(flag==0)
	printf("%d is prime number \n",a);
	else
	printf("%d is not prime \n",a);
}

