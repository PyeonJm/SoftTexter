#include <stdio.h>

int main(void)
{

    int val3= 10;                // 10, 11, 12
    int val4= (val3++)+(++val3); // 10 + 12 = 22, 23, 24
    int val5= (++val4)+(val4++); // 23 + 24 = 47, 48, 49
    int val6= (val5++)+(++val5); // 47 + 49 = 96

    printf(" val3 : %d \n", val3);
    printf(" val4 : %d \n", val4);
    printf(" val5 : %d \n", val5);
    printf(" val6 : %d \n", val6);

    return 0;
}