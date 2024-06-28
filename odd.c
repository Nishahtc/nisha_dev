#include<stdio.h>
int main()
{
    int odd_num[100];
    printf("enter 1_100 odd number");
    
    for(int i=1;i<=100;i++)
    {
        if (i %2!=0)
        {
            printf("\n %d",i);
        }
    }
    return 0;
}