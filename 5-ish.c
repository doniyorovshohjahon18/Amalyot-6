#include <stdio.h>

int main() {

    char name[20];

    printf("Ism va familiyani kiriting: ");
    fgets(name, sizeof(name), stdin);


    printf("%s", name);

    return 0;
}