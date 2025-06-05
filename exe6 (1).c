#include <stdio.h>
#include <string.h>

struct filme {
  char nome[50];  
  float duracao;
  int ano;
};

int main(void) {
  struct filme unico;

  printf("Digite o nome do filme: ");
  fgets(unico.nome, sizeof(unico.nome), stdin);

  printf("Digite a duração do filme: ");
  scanf(" %f", &unico.duracao);

  printf("Digite o ano de lançamento do filme: ");
  scanf(" %d", &unico.ano);

  FILE *pArquivo = fopen("filmes.txt", "ab"); 
  if (pArquivo == NULL) {
    printf("Erro ao abrir o arquivo.\n");
    return 1;
  }

  fwrite(&unico, sizeof(struct filme), 1, pArquivo);

  fclose(pArquivo);

  printf("Filme salvo com sucesso!\n");

  return 0;
}
