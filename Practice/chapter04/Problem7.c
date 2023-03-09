#include<stdio.h>

int main(){

    int n=1;int sum = 0;
    do
    {
        sum +=n;
        n++;
    }while (n<=10);
    printf("Sum is %d: \n",sum);
    return 0;
}