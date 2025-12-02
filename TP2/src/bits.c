#include <stdio.h>

int main() {
    unsigned int d = 0xF00F0000; // Exemple

    int bit4  = (d >> (32 - 4)) & 1;   // bit 28
    int bit20 = (d >> (32 - 20)) & 1;  // bit 12

    if (bit4 == 1 && bit20 == 1)
        printf("1\n");
    else
        printf("0\n");

    return 0;
}
