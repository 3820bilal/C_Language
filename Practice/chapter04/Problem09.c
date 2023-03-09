#include<stdio.h>

int main(){

    int n = 5;
    int factorial = 5;
    int i = 1;
    while (i < n)
    {
        factorial *= n-i;
        i++;
    }
    printf("Factorial is %d: \n",factorial);
    return 0;
}


// #include<stdio.h>

// int main(){

//     int n = 5;
//     int factorial = 1;
//     int i = 1;
//     while (i <= n)
//     {
//         factorial *= i;
//         i++;
//     }
//     printf("Factorial is %d: \n", factorial);
//     return 0;
// }
