#include <stdio.h>
#define showPa printf("----------------------------\n");

int main(){
    int num1, num2, sum; //%d

    showPa;
    printf("    SUM NUMBER\n");
    showPa;
    do{
        printf("Enter number 1: ");
        scanf("%d", &num1);
        printf("Enter number 2: ");
        scanf("%d", &num2);
        sum = num1 + num2 ;
        printf("sum = %d\n", sum);
        showPa;
    }while (sum <= 999);
    
    showPa;
    return 0;

}
