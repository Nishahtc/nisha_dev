#include<stdio.h>
int add(int num1,int num2)
{
    return num1+num2;
}
void main()
{
    int firstnum;
    int secondnum;
    int copynum=0;
    printf("enter number");
    scanf("%d",&firstnum);
       printf("enter number");
    scanf("%d",&secondnum);
    copynum=add(firstnum,secondnum);
    printf("total number %d",copynum);
}