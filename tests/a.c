#include <stdio.h>

int main() {

	char a[7] = {'h', 'e', 'l', 'l', 'o', '\n', '\0'};

	printf("%s\n", a);

	for(int i = 0; i < 3; i++) {
		a[i]++;
	}
	printf("%s", a);
}