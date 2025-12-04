#include <stdio.h>

typedef struct{
   int infoi1;
   float info2;
}IOT;

int main(){
    int x = 999;
    int *p_x =&x;
    IOT stuA = {10,111,111};
    IOT stuB = {20,222,222};

    IOT *p_stuA = &stuA;

    printf("%p\n", &stuA);
    printf("%p\n", p_stuA);
    printf("%d\n", stuA.infoi1); //10
    printf("%d\n", p_stuA->infoi1); //10

    printf("%d\n", x);  //999
    printf("%d\n",*p_x); //999

    return 0;
}
 