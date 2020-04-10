#include <stdio.h>
#include <stdint.h>

struct nlist {
	struct nlist* next;
	char* name;
	char* defn;
};

struct nlist global =
{(struct nlist*)6, NULL,NULL,NULL};

int main() {
	puts("warning, this is really a bad idea");
	printf("%p,%p,%p\n",global.next, global.name,global.defn);
}
