#include <stdio.h>

int sum_num(int n);
int main()
{
    int n;
    printf("Please enter number for sum:\n");
    scanf("%d",&n);
    printf("The sum of %d number is :%d\n",n,sum_num(n));
    

    return 0;
}
int sum_num(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return n + sum_num(n - 1);
    }
}