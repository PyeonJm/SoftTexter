#include <stdio.h>

int main(void)
{
    char val1;
    char ch1='A', ch2=65; 
    unsigned char val11= 255;

    short val2;
    unsigned short val12= 65535;

    int val3;
    unsigned int val13= 4294967295;

    long val4; 
    unsigned long val14= -1;

    float val5;
    double val6;
    long double val7; 

    //Data Type sizeof
    printf("Data type bit size\n");
    printf("%d ", sizeof (val1));   //1 bit
    printf("%d, ", sizeof (char));
    printf("%d ", sizeof (val2));   //2 bit
    printf("%d, ", sizeof(short));
    printf("%d ", sizeof (val3));   //4 bit, 1byte
    printf("%d, ", sizeof(int));
    printf("%d ", sizeof (val4));   //4 bit, 1byte
    printf("%d \n", sizeof(long));
    printf("%d ", sizeof (val5));   //4 bit, 1byte
    printf("%d, ", sizeof(float));
    printf("%d ", sizeof (val6));   //8 bit, 2byte
    printf("%d, ", sizeof(double));
    printf("%d ", sizeof (val7));   //12bit, 3byte
    printf("%d\n\n", sizeof(long double));

    //unsigned data type
    //char 255, short 65535
    //int 4294967295, long 4294967295
    printf("Unsigned data type\n");
    printf("char: %u, short: %u\n", val11,val12); 
    printf("int: %u, long: %u\n\n", val13,val14); 

    //ASCII code
    // %c= A, %d= 65 
    printf("ASCII 'A'=65\n");
    printf("%d %d = %c %c", ch1,ch2,ch1,ch2);

    return 0;
}