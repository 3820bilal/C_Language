#include<stdio.h>

void val_pass_by_val(int x);
int main(){

    int i = 3;
    printf("The value of i is:%d\n",i);
    val_pass_by_val(i);
    printf("The value of i after passing by val is:%d\n",i);


    return 0;
}
void val_pass_by_val(int x){
    
    x = 5;

}