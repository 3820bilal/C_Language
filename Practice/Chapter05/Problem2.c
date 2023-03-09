#include<stdio.h>

//function prototype
float cel_to_farnhight(float temp);

int main(){

    float cel_temp;
    printf("Please enter temp in celcious: \n");
    scanf("%f",&cel_temp);
    printf("Fahrenheit temp is %f:\n",cel_to_farnhight(cel_temp));
    

    return 0;
}

//function defination
float cel_to_farnhight(float cel_temp){

    float farnhight = (cel_temp *9/5)+32;
    return farnhight;
}





// without functions
// int main(){

//     int faranhit;
//     int temp = 0;
//     printf("Please enter temperature in celcious: \n");
//     scanf("%d",&temp);
//     faranhit =(temp*9/5)+32;
//     printf("Faranhit temp is:%d \n",faranhit);
//     return 0;
// }