#include<stdio.h>

float average(int x,int y,int z);

int main(){

    int a,b,c;
    printf("Please enter the value of a: \n");
    scanf("%d",&a);
    printf("Please enter the value of b: \n");
    scanf("%d",&b);
    printf("Please enter the value of c: \n");
    scanf("%d",&c);
    printf("The average of three numbers is:%f \n",average(a,b,c));
    return 0;
}
float average(int x,int y,int z){
    float result = (x+y+z)/3;
    return result;
}