#include <stdio.h>

int sum(int *x, int *y);

int average(int *a, int *b);

int main()
{

    int a = 3, b = 2;
    printf("sum of two numbers is: %d\n",sum(&a, &b));
    // printf("Average of two numbers is: %d\n",sum(&a, &b)/2);
    
    printf("Average of two numbers is: %f \n",(float)average(&a, &b));
    

        return 0;
}
int sum(int *x, int *y)
{
    int result;
    result = *x + *y;
    return result;
}

int average(int *x, int *y)
{
    int result;
    result = sum(x, y)/2;
    return result;
}
