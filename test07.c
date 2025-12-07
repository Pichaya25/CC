//รับค่าชื่ออายุเงินเดือน แล้วแสดงผล

#include <stdio.h>
#define showline printf("-----------------------\n");

int main() {
    char fullname[50]; //%s, %[^\n]
    int age; //%d
    float salary; //%f
    
    showline
    printf(" profile infometion \n");
    showline
    printf("enter your fullname: ");
    scanf("%[^\n]", &fullname);
    printf("enter your age: ");
    scanf("%d", &age);
    printf("enter tour salary: ");
    scanf("%f",&salary);
    showline
    printf("Hi %s\n", fullname);
    printf("you are %d years old.\n", age);
    printf("your salary is %.2f baht.\n", salary);
    showline


    return 0;

}
