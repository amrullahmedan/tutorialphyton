#include <stdio.h>
	int misteri3(const char *);
	main() {
	char string[80];
	printf("Ketik sebuah string : "); scanf("%s", string);
	printf("%d\n", misteri3(string));
	}
	int misteri3(const char *s) {
	int x = 0;
	for ( ; *s != '\0' ; s++)
	++x;
	return x;
	} 

