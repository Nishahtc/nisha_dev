#include<stdio.h>
int main()
{
    int num[10];
    
    printf("enter 10 number");
    for(int i=0;i<10;i++)
    {
       scanf("%d",&num[i]);
    }
     for (int x=0;x<10;x++)
     {
        for (int p=x+1;p<10;p++)
        {
            if(num[x]==num[p])
            {
               printf("\n duplicate number %d",num[x]);
            }
        }
        
     }
     

    return 0;
}