#include <stdio.h>
#include <string.h>

int main(void) {
  FILE *pArquivo = NULL;
  char opcao, livro[104], personagens[101];

    
  printf("Digite o titulo da obra: ");
  fgets(livro, 100, stdin);
  strcat(livro, ".txt");
  
  pArquivo = fopen(livro, "w");

  while(opcao != 'f' && opcao != 'F') {
  printf("Digite o nome do personagen: ");
  scanf("%100s", personagens);
  fprintf(pArquivo, "%s\n", personagens);
  getchar();

  printf("Deseja continuar (f para sair): ");
  scanf("%c", &opcao);
  } 
 
  fclose(pArquivo);

  return 0;
}