#include <stdio.h>

int main() {
    char c = 0x12;
    short s = 0x1234;
    int i = 0xa47865ff;
    long int l = 0x12345678;
    long long int ll = 0x1122334455667788;
    float f = 2.0f;
    double d = 3.14;
    long double ld = 1.2345;

    char *pc = &c;
    short *ps = &s;
    int *pi = &i;
    long int *pl = &l;
    long long int *pll = &ll;
    float *pf = &f;
    double *pd = &d;
    long double *pld = &ld;

    printf("Avant :\n");
    printf("i : adresse = %p, valeur = %x\n", (void*)pi, *pi);

    (*pi)--;   // manip via pointeur
    f = 1.0f;  // changement valeur float

    printf("Après :\n");
    printf("i : adresse = %p, valeur = %x\n", (void*)pi, *pi);

    return 0;
}
