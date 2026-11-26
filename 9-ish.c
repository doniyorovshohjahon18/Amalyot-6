#include <stdio.h>
#include <string.h>

int main() {

    char a[20] = "Toxirbek ";;
    char b[20] = "Toxir";
    
    strcat(a, b);

    printf("%s", a);
    return 0;
}