#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    float valueOne;
    float valueTwo;
    char operator;
    float answer;

    printf("Enter value one:\n");
    scanf(" %f", &valueOne);

    printf("Enter an operator (+, -, /, *, ^ = pow, r = sqroot):\n");
    scanf(" %s", &operator);

    printf("Enter value two:\n");
    scanf(" %f", &valueTwo);

    switch (operator)
    {
    case '/':
        answer = valueOne / valueTwo;
        break;
    case '*':
        answer = valueOne * valueTwo;
        break;
    case '+':
        answer = valueOne + valueTwo;
        break;
    case '-':
        answer = valueOne - valueTwo;
        break;
    case '^':
        answer = pow(valueOne, valueTwo);
        break;
    case 'r':
        answer = sqrt(valueOne);
        break;
    default:
        goto fail;
    }

    printf("%g %c %g =  %g\n\n", valueOne, operator, valueTwo, answer);

    goto exit;

fail:
    printf("Fail.\n");
exit:
    return 0;
}