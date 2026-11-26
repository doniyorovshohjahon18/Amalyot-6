#include <stdio.h>

int main() {

    char name[6];
    name[0] = 't';
    name[1] = 'o';
    name[2] = 'x';
    name[3] = 'i';
    name[4] = 'r';
    name[5] = '\0';


    
    printf("%c", name[0]);
    printf("%c", name[1]);
    printf("%c", name[2]);
    printf("%c", name[3]);
    printf("%c", name[4]);
    
    return 0;
}