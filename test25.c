#include <stdio.h>

struct Sau{
    char name[20];
    int id;
    int age;
    float score;
};

int main(){
    struct Sau dateA;
    int dateB[5];
    int dateC[3] ={10, 20, 30};
    struct Sau dateD = {"Sombat", 1, 20, 99.99};

    printf("%d\n", dateC[2]);
    printf("%.2f\n", dateD.score);
    dateD.id = 654123789;
    return 0;
}

