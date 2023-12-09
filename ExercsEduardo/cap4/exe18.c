#include <stdio.h>

int main() {
    int x, y, z;

    printf("Digite o valor de X: ");
    scanf("%d", &x);

    printf("Digite o valor de Y: ");
    scanf("%d", &y);

    printf("Digite o valor de Z: ");
    scanf("%d", &z);

    if (x < y + z && y < x + z && z < x + y) {
        if (x == y && y == z) {
            printf("Triângulo equilátero\n");
        } else if (x == y || x == z || y == z) {
            printf("Triângulo isósceles\n");
        } else {
            printf("Triângulo escaleno\n");
        }
    } else {
        printf("Os valores informados não formam um triângulo\n");
    }

    return 0;
}
