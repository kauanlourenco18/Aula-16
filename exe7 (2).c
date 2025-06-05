#include <stdio.h>
#include <string.h>

struct filme {
  char nome[50];  
  float duracao;
  int ano;
};

int main(void) {
  struct filme retorno;

  FILE *pArquivo;
  pArquivo = fopen("filmes.txt", "rb");

  fread(&retorno, sizeof(struct filme), 1, pArquivo);

  fclose(pArquivo);

  printf("Nome do filme: %s", retorno.nome);
  printf("Duração do filme: %.2f\n", retorno.duracao);
  printf("Ano de lançamento do filme: %d\n", retorno.ano);

  return 0;
}