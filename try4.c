#include <stdio.h>
int add(int x, int y);
int sub(int x, int y);
int mul(int x, int y);
int div(int x, int y);
int main()
{
    int FirstNumber, SecondNumber;
    char operator;
    int result = 0;

    while (1)
    {
        printf("\nEnter An operator (+,-,*,/),if Want to be exit press x : ");
        scanf(" %c", &operator);

        if (operator== 'x' || operator=='X')
        {
            break;
        }

        printf("\nEnter Two Number ");
        scanf("%d %d", &FirstNumber, &SecondNumber);

        if (operator== '+')
        {
            result = (FirstNumber, SecondNumber);
            printf("\n%d + %d = %d", FirstNumber, SecondNumber, result);
        }
        else if (operator== '-')
        {
            result = sub(FirstNumber, SecondNumber);
            printf("\n%d - %d = %d", FirstNumber, SecondNumber, result);
        }
        else if (operator== '*')
        {
            result = mul(FirstNumber, SecondNumber);
            printf("\n%d * %d = %d", FirstNumber, SecondNumber, result);
        }
        else if (operator== '/')
        {
            result = div(FirstNumber, SecondNumber);
            printf("\n%d / %d = %d", FirstNumber, SecondNumber, result);
        }
        else
        {
            printf("\ninvalid operator");
        }
    }

    return 0;
}
int add(int x, int y)
{
    return x + y;
}
int sub(int x, int y)
{
    return x - y;
}
int mul(int x, int y)
{
    return x * y;
}
int div(int x, int y)
{
   return x/y;
}