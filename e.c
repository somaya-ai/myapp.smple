#include <stdio.h>

int main()
{
	char c;
	char* p;
	
	char* q =p;
	while( (c=getchar()) != '\n')
   *p++ = c;

	if( c == '\n')
		*p = '\0';
	printf("%10s\n",q);
}


