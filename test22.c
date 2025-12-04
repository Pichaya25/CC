
#include <stdio.h>
int main(){

int dataA;
int*p_dataA;

dataA = 10;

// แสดง address number ของ DataA
printf("Address of A : %p\n", &dataA   );
printf("Address of A : %d\n", &dataA   );
printf("%p\n",p_dataA);
printf("%d\n",p_dataA);

// แสดง ค่าที่อยู่ในช่อง DataA
printf("Value DataA : %d\n", dataA);
printf("Value DataA : %d\n", *p_dataA);

    return 0;

}