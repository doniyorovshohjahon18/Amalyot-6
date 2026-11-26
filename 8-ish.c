#include <stdio.h>
#include <string.h>

int main() {

    char a[20];
    char b[20] = "Toxir";
    
    strcpy(a, b);

    printf("%s", a);
    return 0;
}