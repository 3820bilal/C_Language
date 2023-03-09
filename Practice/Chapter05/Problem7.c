#include <stdio.h>

void print_sequence(int n);
int main()
{
    int n = 5;
    printf("Sequence is: \n");
    print_sequence(n);
    return 0;
}
void print_sequence(int n)
{
    if (n == 1)
    {
        printf("*\n");
        return;
    }
    print_sequence(n - 1);
    {
        // printing for even sequence
        for (int i = 0; i < (2 * n - 2); i++)
        {
            printf("*");
        }
        printf("\n");
        // printing for odd sequence
        // for (int i = 0; i < (2 * n - 1); i++)
        // {
        //     printf("*");
        // }
        // printf("\n");
    }
}


// void print_sequence(int n)
// {
//     if (n == 1)
//     {
//         printf("*\n");
//         return;
//     }
//     {
//         // printing for even sequence
//         for (int i = 0; i < (2 * n - 2); i++)
//         {
//             printf("*");
//         }
//         printf("\n");
//         // printing for odd sequence
//         // for (int i = 0; i < (2 * n - 1); i++)
//         // {
//         //     printf("*");
//         // }
//         // printf("\n");
//     }
//     print_sequence(n - 1);
// }