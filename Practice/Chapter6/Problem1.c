#include<stdio.h>

int main(){

    int i = 8;
    printf("%p\n",&i);
    printf("%d\n",*(&i));

    return 0;
}
