#include <stdio.h>
size_t my_strlen(const char *s)
{
	char *p = s;
	char *p2 = s2;
	char *p3 = s3;
	while (*p) ++p;
	return (p - s);
}

char *my_strcpy(const char *t, const char *s)
{
	char *p = t; 
	while (*t ++ = *s ++);
	return p;
}

int main(void) {
	int i;

	char *s[] = {
		"Git tutorials", "Hello World"
	};
	for (i = 0; i < 2; ++i)
		printf("string lenght of %s = %d\n", s[i], my_strlen(s[i]));
	
	return 0;
}