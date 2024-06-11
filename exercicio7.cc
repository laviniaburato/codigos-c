#include <stdio.h>

int main() {
    int estoque;

    printf("Quantidade em estoque: ");
    scanf("%d", &estoque);

    if (estoque < 20)
        printf("Fazer novo pedido.\n");
    else
        printf("Nao e necessario fazer novo pedido.\n");

    return 0;
}

