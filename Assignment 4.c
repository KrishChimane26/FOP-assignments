#include <stdio.h>

int main() {
    float bp, hra, ta, gr, pt, net;
    printf("Enter Basic Pay: ");
    scanf("%f", &bp);
    hra = 0.10 * bp;
    ta  = 0.05 * bp;
    gr = bp + hra + ta;
    pt = 0.02 * gr;
    net = gr - pt;
    printf("\nGross Salary = %.2f", gr);
    printf("\nNet Salary   = %.2f", net);

    return 0;
}
