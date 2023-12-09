#include <stdio.h>

int main() {
    int num1, num2, num3, num4;

    printf("Digite os três primeiros números em ordem crescente: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    printf("Digite o quarto número: ");
    scanf("%d", &num4);

    printf("Os números em ordem decrescente são: ");
    if (num4 > num3) {
        printf("%d %d %d %d\n", num4, num3, num2, num1);
    } else if (num4 > num2) {
        printf("%d %d %d %d\n", num3, num4, num2, num1);
    } else if (num4 > num1) {
        printf("%d %d %d %d\n", num3, num2, num4, num1);
    } else {
        printf("%d %d %d %d\n", num3, num2, num1, num4);
    }

    return 0;
}
