#include <stdio.h>
#include <stdlib.h>

int main() {
    int *cod = NULL;
    float *prova1 = NULL;
    float *prova2 = NULL;
    float enter2, enter3, media, mediaGeral = 0;
    int quant1 = 0, quant2 = 0, quant3 = 0, enter1;
    int aprovados = 0;
    int reprovados = 0;
    int quaseMediageral = 0;

    printf("Esta é uma calculadora de notas escolares no estilo Cobalto.\n");
    printf("Quando os valores inseridos forem negativos, a inserção de dados irá acabar.\n");

    do {
        printf("Insira o código do aluno: ");
        scanf("%d", &enter1);
        
        if (enter1 < 0) break;

        printf("Insira o valor da primeira prova: ");
        scanf("%f", &enter2);
        
        if (enter2 < 0) break;

        printf("Insira o valor da segunda prova: ");
        scanf("%f", &enter3);
        
        if (enter3 < 0) break;

        cod = (int*)realloc(cod, (quant1 + 1) * sizeof(int));
        prova1 = (float*)realloc(prova1, (quant2 + 1) * sizeof(float));
        prova2 = (float*)realloc(prova2, (quant3 + 1) * sizeof(float));
        
        if (cod == NULL || prova1 == NULL || prova2 == NULL) {
            printf("Erro ao alocar memória.\n");
            return 1;
        }
        
        cod[quant1] = enter1;
        quant1++;
        prova1[quant2] = enter2;
        quant2++;
        prova2[quant3] = enter3;
        quant3++;

    } while (1);

    for(int i = 0; i < quant1; i++) {
        media = (prova1[i] + prova2[i]) / 2.0;
        
        if (media >= 7) {
            aprovados++;
        } else {
            reprovados++;
        }
        quaseMediageral += media;
    }

    mediaGeral = quaseMediageral / quant1;

    printf("A quantidade de alunos aprovados é: %d\n", aprovados);
    printf("A quantidade de alunos reprovados é: %d\n", reprovados);
    printf("A média geral de todos os alunos é: %.2f\n", mediaGeral);
    
    free(cod);
    free(prova1);
    free(prova2);

return 0;
}