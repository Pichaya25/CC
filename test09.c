#include <stdio.h> //printf() , scanf()
#define showline printf("-----------------------------\n");

int main(){
    int bus_number; //int (%d) lang int (%id)

    showline;
    printf("Bus number information\n");
    showline;
    printf("Enter bus number: ");
    scanf("%d", &bus_number);
    showline;
    switch (bus_number){
        case 57 : printf("Go to pinklo, bangkhunnon\n");
                    break;
        case 3 : printf("Go to sanam Luang, Ladproao\n");
                    break;
        case 71 : printf("Go to Hua Lamphu, Taowarat\n");
                    break;
        case 56 : printf("Go to Bang Lamphu, Sapan Krungthon\n");
                    break;
        case 539 : printf("Go to Samen, Anusawaru Chai\n");
                    break;
        default : printf("Don\'t have data\n");
    }
    showline;
    
    return 0;
}