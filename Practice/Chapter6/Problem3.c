#include<stdio.h>

void val_pass_byref(int *x);
int main(){

    int i = 3;
    printf("The value of i is:%d\n",i);
    val_pass_byref(&i);
    printf("The value of i after passing by ref is:%d\n",i);


    return 0;
}
void val_pass_byref(int *x){

    // printf("The value of x is:%p\n",&x);
    
    *x = 5;

}