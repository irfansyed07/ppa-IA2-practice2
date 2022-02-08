#include<stdio.h>
int main()
{
    float base,height,*area;
    printf("enter the base,height values\n");
    scanf("%f%f",&base,&height);
    *area = ((base+height)/2);
    printf("the area of trinagle =%f",*area);
    return 0;
}