struct nlist {
	struct nlist *next;
	char* name;
	char* defn;
};
char *h[10];
struct nlist global;
struct nlist *hashtab[101];  
#include <stdint.h>
#include <stdio.h>

int main() { printf("%p, %p, %p\n", global.next, global.name, global.defn);
struct nlist *np = hashtab[20];

printf("%p\n",np);


} 
