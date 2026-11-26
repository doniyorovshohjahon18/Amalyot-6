#include <stdio.h>
#include <string.h>

int main() {

    char name[20];

    printf("Ism va familiyani kiriting: ");
    fgets(name, sizeof(name), stdin);
    int index = strcspn(name, "\n");
    name[index] = '\0';

    for (int i = 0; name[i] != '\0'; i++)
    {
        printf("%c ", name[i]);
    }
    
    

    return 0;
}