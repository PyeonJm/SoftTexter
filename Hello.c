#include <stdio.h>

int main(void)
{
    int a=15, b=20;  
    // a = 00000000 00000000 00000000 00001111
    // b = 00000000 00000000 00000000 00010100
    int B_and= a&b; 
    int B_or= a|b;
    int B_xor= a^b;
    int B_not= ~a;
    int B_Lshift= a<<2;
    int B_Rshift= a>>2;

    printf("AND         &  : %d\n", B_and);              //4
    printf("OR          |  : %d\n", B_or);               //31
    printf("XOR         ^  : %d\n", B_xor);              //27
    printf("NOT         ~  : %d\n", B_not);              //-16
    printf("LEFT SHIFT  << : %d\n", B_Lshift);           //60
    printf("RIGHT SHIFT >> : %d\n", B_Rshift);           //3

    return 0;
}