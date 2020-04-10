#include <stdio.h>

int main() 
{
	char c;
	char* p;
	char* q= p;
	while ( (c = getchar()) != '\n' ) 
			*p++ = c;
	
			if ( c == '\n')
   *p = '\n';

   printf("%15s",q);
  
  return 0;
  } 

