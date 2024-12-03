#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	char znak = '1';
	while (znak < '9') {
		printf("%c-%c-%c", znak, znak++, znak--);
		znak++;
	}
	return 0;
}



