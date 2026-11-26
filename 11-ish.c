#include <stdio.h>
#include <string.h>

int main(void) {

	char matn[] = "Salom";

	size_t uzunlik = strlen(matn);
	printf("Matn: %s\n", matn);
	printf("Belgilar soni: %zu\n", uzunlik); 

	return 0;
}
