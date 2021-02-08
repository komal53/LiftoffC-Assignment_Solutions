#include<stdio.h>
int main()
{
    int p,q;
    printf("Enter two numbers : ");
    scanf("%d %d",&p,&q);
    printf("p+q = %d\n",p+q);
    printf("p-q = %d\n",p-q);
    printf("p*q = %d\n",p*q);
    if(q!=0)
    {
        printf("p/q = %d",p/q);
        printf("p%q = %d",p%q);
    }
    else
    printf("Division of the numbers is not possible so no quotient and remainder.");
    return 0;
}
