#include <stdio.h>
int main()
{
    char ch;
    float num1,num2;
    printf("Enter two numbers: ");

    scanf("%f %f",&num1,&num2);


    printf("1. Add(+)\n");
    printf("2. Subtract(-)\n");
    printf("3. Multiply(*)\n");
    printf("4. Divide(/)\n");

    printf("Enter your choice : ");

    scanf("%s",&ch);
    if(ch=='1')
    {
        printf("Add  : %f",num1+num2);
    }
    else if(ch=='2')
    {
        printf("Subtraction  : %f",num1-num2);
    }
    else if(ch=='3')
    {
        printf("Multiplication  : %f",num1*num2);
    }
    else if(ch=='4')
    {
        if(num2==0)
            printf("Division: Zero as divisor is not valid!");
        else
        printf("Division: %f",num1/num2);
    }
    else
    {
        printf("This operator not in use");
    }

    return 0;
}
