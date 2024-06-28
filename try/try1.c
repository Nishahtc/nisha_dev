#include <stdio.h>
#include <string.h>
int main()
{
    char pass[]="nisha";
    char input[10];

    do
    {
        printf("enter password ");
        scanf(" %s", &input);
    } while (strcmp(input, pass) != 0);
    printf("welcome ");
    return 0;
}