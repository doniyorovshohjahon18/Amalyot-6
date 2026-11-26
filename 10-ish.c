#include <stdio.h>
#include <string.h>

int main() {

    char a[20] = "Toxirbek ";
    char b[20] = "Toxir";

    const char *topildi = strstr(a, b);

    if (topildi != NULL) {
        printf("Topildi: %s\n", topildi);
    } else {
        printf("Topilmadi\n");
    }
    return 0;
}