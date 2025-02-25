#include <stdio.h>

                // Tema 2 - Treinando if / else - 
                


int main() {
    char nome1[50], nome2[50];
    int item;
    float preco1, preco2;

    printf("Quantos produtos você comprou? ");
    scanf("%d", &item);

    if (item > 1) { 
        printf("Digite o nome do primeiro produto: ");
        scanf("%s", nome1);

        printf("Digite o nome do segundo produto: ");
        scanf("%s", nome2);

        printf("Qual o valor do primeiro produto (%s)? ", nome1);
        scanf("%f", &preco1);  

        printf("Digite o valor do segundo produto (%s): ", nome2);
        scanf("%f", &preco2);  




        if (preco1 > preco2)
            printf("%s é mais caro que %s.\n", nome1, nome2);
        else if (preco1 < preco2)
            printf("%s é mais caro que %s.\n", nome2, nome1);
        else
            printf("Os dois produtos possuem o mesmo preço.\n");

    } else {
        printf("Só podemos fazer comparações quando a compra for de pelo menos 2 produtos.\n");
    }

    return 0;
}
