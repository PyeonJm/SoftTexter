#include <stdio.h>

int main(void)
{
    int val1=10;
    int val2=12;
    int result1, result2, result3;

    int val3=10;
    int val4=12;
    int val5=0;
    int val6=2;
    int result4, result5, result6, result7;

    int a=1, b=2;
    
    //==, >, <, >=, <= true = 1, False = 0.
    result1=(val1==val2); //X = 0
    result2=(val1<=val2); //O = 1
    result3=(val1>val2);  //X = 0

    printf("result1 : %d \n", result1);
    printf("result2 : %d \n", result2);
    printf("result3 : %d \n\n", result3);

    //&& = and, || = or,  ! = 0->1, 1->0 
    result4= (val3==10 && val4==12); //O = 1
    result5= (val3<12 || val4>12);   //O = 1
    result6= (!val5);                //O = 1
    result7= (!val6);                //X = 0

    printf("result4 : %d \n", result4);
    printf("result5 : %d \n", result5);
    printf("result6 : %d \n", result6);
    printf("result7 : %d \n\n", result7);

    //Comma, Practice
    a++, --b, --a, b++; //a=1, 1+1-1, b=2, 2-1+1 
    printf("Comma "), printf("Practice\n"); //'Comma '+'Practice'+'\n' 
    printf("%d ", a), printf("%d ", b); //1 2 
    
    return 0;
}