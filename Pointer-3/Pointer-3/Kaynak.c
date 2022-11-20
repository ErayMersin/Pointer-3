#include<stdio.h>
#include<stdlib.h>

int main() {

    char kelime = 'k';
    char* p = &kelime;

    printf("Adres=%x\n", p); //b41ff754

    p++;
    printf("Adres2=%x\n", p); //b41ff755

    p--;
    printf("Adres3=%x\n", p); //b41ff754

    p = p + 5;
    printf("Adres4=%x\n", p); //b41ff759

    return 0;
}