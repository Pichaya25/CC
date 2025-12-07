#include <stdio.h>
 
int calSum(int num1,int num2,int num3){

    return num1 + num2 + num3;

}
 
double calAverage(int num1, int num2, int num3){

    return(num1 + num2 + num3) / 3.0;

}
 
void showSumAndAverage(int sum, double avarage){

    printf("Sum: %d\n",sum);

    printf("Average: %.2lf\n", avarage);

}
 
void inputNumber(){

    int num1, num2, num3;

    int sum;

    double average;

    printf("Enter number 1:"); scanf("%d", &num1);

    printf("Enter number 2:"); scanf("%d", &num2);

    printf("Enter number 3:"); scanf("%d", &num3);

    sum = calSum(num1, num2, num3);

    average = calAverage(num1, num2, num3);

    showSumAndAverage(sum, average);

}
 
int main(){

    inputNumber();

    return 0;

}
