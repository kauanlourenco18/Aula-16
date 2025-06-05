#include <stdio.h>
#include <string.h>

int main(void) {
  FILE *pArquivo = NULL;
  char opcao, data[20], hora[20], resultado[80] = "";

  pArquivo = fopen("remédios.txt", "a");

  if (pArquivo == NULL) {
    perror("Erro ao abrir o arquivo");
    return 1;
  }
  
  while(1) {
    printf("Digite (c) para continuar ou (f) para finalizar: ");
    scanf(" %c", &opcao);
    getchar();

    switch (opcao) {
      case 'c':
      case 'C':
        printf("Digite a data atual (dd/mm/aaaa): ");
        scanf("%19s", data);
        getchar(); 

        printf("Digite a hora atual (hh:mm): ");
        scanf("%19s", hora);
        getchar();

        sprintf(resultado, "Data: %s Hora: %s", data, hora);
        fprintf(pArquivo, "%s\n", resultado);
        break;
      case 'f':
      case 'F':
        printf("Finalizando o arquivo\n");
        fclose(pArquivo);
        return 0; 
      default:
        printf("Opção inválida.\n");
    }
  }
}
