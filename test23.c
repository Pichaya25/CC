#include <stdio.h>

int main(){

 int info[5] = {10, 20, 30, 40, 50};

 int*p_info = info;
 int*p2_info = &info[0];

 printf("%d\n", info[3]);
 printf("%d\n", *(p_info + 3));
 printf("%d\n", *(p2_info + 3));
 *(p_info + 3) = 999;
 printf("%p\n", &info[0]);
 printf("%p\n", p_info);
 printf("%p\n", p2_info);

 printf("%d\n", &info[0]);
 printf("%d\n", p_info);
 printf("%d\n", p2_info);

 printf("%d\n", info[0]);
 printf("%d\n", *p_info);
 printf("%d\n", *p2_info);


    return 0;
}
