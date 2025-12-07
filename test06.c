//Global-local Verlable
#include "stdio.h" //หรือ <stdio.h>

int dataA = 100 ; //Global Verlable ใช้ที่ไหนก็ได้
const int dataE  = 5050;

void showData(){
    int dataB = 555 ;

    printf("dataA = %d\n",dataA);
    printf("dataB = %d\n",dataB);
    //printf("dataC = %d\n", dataC); Error
    //printf("dataD = %d\n", dataD); error
}

int main(){

    int dataC = 999 ; //local Verlable ใช้ได้เฉพาะใน code block นั้นๆ เท่านั้น
    const int dataD = 1010; //constant(ค่าคงที่) verlable
    // dataD = 2020; Error

    dataC = 888;

    printf("dataA = %d\n",dataA);
    dataC = 777;
    printf("dataC = %d\n",dataC);
    //printf("dataB = %d\n",dataB); Error
    printf("dataE = %d\n", dataE);

    return 0;

}