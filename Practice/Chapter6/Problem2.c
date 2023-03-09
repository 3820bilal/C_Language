#include<stdio.h>

void print_add(int x);
int main(){

    int i = 3;
    printf("Address in mian %p\n",&i);
    print_add(i);
    return 0;
}
void print_add(int x){
    printf("Address in function %p\n",&x);
}


// the address are not same because here we are passing by value, and a copy of variable "i" is passed in 
// function, not the actual variable "i", therefore they have different memory addresses