//receber do teclado um nome e imprimir quantas letras "A" tem o nome.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

  char nome[50];
  int qA = 0;
  
  printf("Nome:\n");
  gets(nome);

  for(int i = 0; i <= strlen(nome); i++){
    if(nome[i] == 'A' || nome[i] == 'a'){
      qA ++;
    }
  }
  printf("%d letras A\n", qA);
    
}