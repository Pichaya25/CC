#include <stdio.h>

int main() {
    char emp_id[20], emp_name[50];
    float salary, tax, social, net_salary;

    // รับข้อมูล
    printf("Enter empoloyee ID: ");
    scanf("%s", emp_id);

    printf("กรอกชื่อพนักงาน: ");
    scanf("%s", emp_name);     

    printf("กรอกเงินเดือน: ");
    scanf("%f", &salary);

    // คำนวณ
    tax = salary * 0.07;
    social = salary * 0.03;    

    net_salary = salary - tax - social;

    // แสดงผล
    printf("\n----- รายละเอียดเงินเดือน -----\n");
    printf("รหัสพนักงาน: %s\n", emp_id);
    printf("ชื่อพนักงาน: %s\n", emp_name);
    printf("เงินเดือน: %.2f บาท\n", salary);
    printf("หักภาษี 7%%: %.2f บาท\n", tax);
    printf("หักค่าประกันสังคม 3%%: %.2f บาท\n", social);
    printf("เงินเดือนสุทธิ: %.2f บาท\n", net_salary);

    return 0;
}
