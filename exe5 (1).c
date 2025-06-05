#include <stdio.h>
#include <string.h>

int main(void) {
  FILE *pArquivo = NULL;
  char destino[100];

  pArquivo = fopen("remédios.txt", "r");

  if (pArquivo == NULL) {
    printf("Erro ao abrir o arquivo");
    return 1;
  } else {
      while((fgets(destino, 100, pArquivo) != NULL)) {
      strcpy(destino, destino);
  }
 } 

  printf("%s", destino);
  fclose(pArquivo);

return 0;
}