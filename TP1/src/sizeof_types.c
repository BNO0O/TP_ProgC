#include <stdio.h>

int main() {
    printf("Tailles des types de base en octets :\n\n");

    // Types char
    printf("char : %zu octet(s)\n", sizeof(char));
    printf("signed char : %zu octet(s)\n", sizeof(signed char));
    printf("unsigned char : %zu octet(s)\n\n", sizeof(unsigned char));

    // Types short
    printf("short : %zu octet(s)\n", sizeof(short));
    printf("signed short : %zu octet(s)\n", sizeof(signed short));
    printf("unsigned short : %zu octet(s)\n\n", sizeof(unsigned short));

    // Types int
    printf("int : %zu octet(s)\n", sizeof(int));
    printf("signed int : %zu octet(s)\n", sizeof(signed int));
    printf("unsigned int : %zu octet(s)\n\n", sizeof(unsigned int));

    // Types long
    printf("long int : %zu octet(s)\n", sizeof(long int));
    printf("signed long int : %zu octet(s)\n", sizeof(signed long int));
    printf("unsigned long int : %zu octet(s)\n\n", sizeof(unsigned long int));

    // Types long long
    printf("long long int : %zu octet(s)\n", sizeof(long long int));
    printf("signed long long int : %zu octet(s)\n", sizeof(signed long long int));
    printf("unsigned long long int : %zu octet(s)\n\n", sizeof(unsigned long long int));

    // Types à virgule flottante
    printf("float : %zu octet(s)\n", sizeof(float));
    printf("double : %zu octet(s)\n", sizeof(double));
    printf("long double : %zu octet(s)\n", sizeof(long double));

    return 0;
}
