#include <stdio.h>
#include <string.h>

int main(void) {
	const char matn[] = "Salom, dunyo!";
	char belgi;
    printf("topish kerak bo'lgan sonni yoz: ");
    scanf("%c", &belgi);
	const char *topilgan = strchr(matn, belgi);

	if (topilgan != NULL) {
		printf("'%c' belgisi %td-indeksda topildi.\n", belgi, topilgan - matn);
	} else {
		printf("'%c' belgisi topilmadi.\n", belgi);
	}

	return 0;
	
}
