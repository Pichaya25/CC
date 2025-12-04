#include "stdio.h"

#define SENPA printf("******************************\n");
#define ROW_STD 5
#define COL_SUBJ 3

int main() {
    int stu_score[ROW_STD][COL_SUBJ];
    char subj_name[COL_SUBJ][3][10] = {"Math", "Science", "English"};
    printf("=============score TABLE=============\n");
    for(int x = 0 ; x < ROW_STD; x++) {
        printf("student no.%d scores:\n", x + 1);
        for(int y = 0; y < COL_SUBJ; y++) {
            printf("student NO.%d : \n", x + 1);
            scanf("%d", &stu_score[x][y]);    

        }
        printf("\n");
    }
printf("=============AVERAGE SCORE SCORE=============\n");
for(int y = 0; y < COL_SUBJ; y++) {
    double sum = 0;
    for(int x = 0; x < ROW_STD; x++) {
        sum = sum + stu_score[x][y];
    }
    double avg = sum / ROW_STD;
    printf("%-10s : %1f\n", subj_name[y], avg);
}
SENPA 

    return 0;
}   