#include <stdio.h>
#include <math.h>
 using namespace std;
int add(int a, int b)
{
    return a + b;
}
int subtract(int a, int b)
{
    return a - b;
}
int multiply(int a, int b)
{
    return a * b;
}
int divide(int a, int b)
{
    return a / b;
}
int main()
{
    printf("____________________________________________________________");
    printf("\nSimple Calculator 2 numbers\n");
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Choose method: 1.Addition 2.Subtraction 3.Multiplication 4.Division: ");

    int method;
    scanf("%d", &method);
    while (method < 1 || method > 4)
    {
        printf("Invalid method. Choose again: ");
        scanf("%d", &method);
    }
    int result;
    switch (method)
    {
        case 1:
        result = add(a, b);
        break;
        case 2:
        result = subtract(a, b);
        break;
        case 3:
        result = multiply(a, b);
        break;
        case 4:
        result = divide(a, b);
        break;
        default:
            printf("Invalid method");
            break;
    }

    printf("\nresult: %d\n", result);
    printf("____________________________________________________________");

    return 0;
}