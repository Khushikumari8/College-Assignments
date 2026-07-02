#include<stdio.h>
int main()
{
    // Variable declaration
    float pa,r,t,si;
    float temp;
// accepting numbers
    printf("Enter principal amount:");
    scanf("%f",&pa);
    printf("Enter rate of interest:");
    scanf("%f",&r);
    printf("Enter time:");
    scanf("%f",&t);

    temp=pa*r*t;

    si=temp/100;

    printf("Simple Interest=%f",si);
    printf("\nThank you");
    return 0;

}
