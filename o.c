struct nlist {     
	struct nlist *next;
	char* name;
char* defn;
};

struct nlist global;
#include <stdint.h>
#include <stdio.h>
int main() { printf("%p", global);}


