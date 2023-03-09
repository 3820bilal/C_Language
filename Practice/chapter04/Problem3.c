#include<stdio.h>

int main(){

    int n=1;int sum = 0;
    while (n<=10)
    {
        sum +=n;
        n++;
    }
    printf("Sum is %d: \n",sum);
    return 0;
}