#include <stdio.h>

void affiche_octets(void *p, size_t n) {
    unsigned char *c = (unsigned char*)p;
    for (size_t i = 0; i < n; i++)
        printf("%02x ", c[i]);
    printf("\n");
}

int main() {
    short s = 0x0302;
    int i = 0x04030201;
    long int l = 0x0807060504030201;
    float f = 5.25f;
    double d = 0.5;
    long double ld = 1.0;

    printf("Octets de short :\n");  affiche_octets(&s, sizeof(s));
    printf("Octets de int :\n");    affiche_octets(&i, sizeof(i));
    printf("Octets de long int :\n"); affiche_octets(&l, sizeof(l));
    printf("Octets de float :\n");  affiche_octets(&f, sizeof(f));
    printf("Octets de double :\n"); affiche_octets(&d, sizeof(d));
    printf("Octets de long double :\n"); affiche_octets(&ld, sizeof(ld));

    return 0;
}
