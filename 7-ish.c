#include <stdio.h>
#include <string.h>


int main() {

    char name[20];

    printf("Ism va familiyani kiriting: ");
    fgets(name, sizeof(name), stdin);
    int index = strcspn(name, "\n");
    name[index] = '\0';

    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        if (name[i] == 'a' || name[i] == 'e' || name[i] == 'i' ||
            name[i] == 'o' || name[i] == 'u')
        {
            count++;
        }
    }

    printf("Unli harflar soni: %d\n", count);

    return 0;
}