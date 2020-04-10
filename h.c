#include <stdio.h>
int (*var)() = &getchar;

int main(){
    printf("%p\n", var);
}
