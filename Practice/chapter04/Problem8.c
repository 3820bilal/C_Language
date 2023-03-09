#include<stdio.h>

int main(){

    int n = 5;
    int factorial = 5;
    for(int i=1; i<n; i++)
    {
        factorial *= n-i;
    }
    printf("Factorial is %d: \n",factorial);
    return 0;
}

// #include<stdio.h>

// int main(){

//     int n = 5;
//     int factorial = 1;
//     for(int i=1; i<=n; i++)
//     {
//         factorial *= i;
//     }
//     printf("Factorial is %d: \n", factorial);
//     return 0;
// }
