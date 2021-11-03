#include <stdio.h>
	void misteri2(const char *);
	main() {
	char *string = "ilmu komputer";
	misteri2(string);
	putchar('\n');
//	return 0;
	}
	void misteri2(const char *s) 
	{
	for ( ; *s != '\0' ; s++ )
	putchar(*s);
	}
