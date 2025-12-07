#include <stdio.h>
#define pa printf("-------------------------------\n");

int main(){
    int number;

    pa
    printf("    even and odd number\n");
    pa
    while (1)// วนแบบไม่รู้จบ infinite Loop
    {
        printf("Enter number: ");
        scanf("%d", &number);
        if(number <= 0){
            pa
            break;
        }
        if(number % 2 == 0){
            printf("number is even number");
        }else{
            printf("number is odd number");
        }
        pa
    }

    return 0;
}
