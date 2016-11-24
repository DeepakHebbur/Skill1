#include "addition.h"

addition::addition()
{
a=0;
b=0;
sum=0;
}

void addition::SetA(int num1)
{
    a=num1;
}

void addition::SetB(int num2)
{
    b=num2;
}
int addition::ReturnSum()
{
    sum = a+b;
    return sum;
}
