#include <stdio.h>

int main()
{
    float farhenit,celcius;
    printf("enter farhenit: ");
    scanf("%f",&farhenit);
    celcius=(farhenit-32)*5/9;
    printf("%f\n",celcius);
    
    (celcius>0)?printf("hello\n"):printf("byee\n");
    //printf("Hello World");

    return 0;
}
