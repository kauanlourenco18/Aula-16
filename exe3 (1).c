#include <stdio.h>
#include <string.h>

int main(void) {
  FILE *pArquivo = NULL;
  char opcao, nomeArquivo[100], destino[100];


  printf("Digite o nome do arquivo que você deseja imprimir (sem a extensão): ");
  fgets(nomeArquivo, 100, stdin);
  strcat(nomeArquivo, ".txt");

    pArquivo = fopen(nomeArquivo, "r");

    if (pArquivo == NULL) {
        printf("O arquivo não foi aberto!\n");
        return 1;
    }

    while (1) { 
        printf("Digite (p) para seguir para a próxima linha ou (f) para finalizar: ");
        scanf(" %c", &opcao); 
        getchar(); 

        switch (opcao) {
            case 'p':
            case 'P':
                if (fgets(destino, 100, pArquivo) != NULL) {
                    printf("%s", destino);
                } else {
                    printf("Fim do arquivo.\n");
                    return 0;
                }
                break;
            case 'f':
            case 'F':
                fclose(pArquivo);
                return 0; 
            default:
                printf("Opção inválida.\n");
        }
    }
}