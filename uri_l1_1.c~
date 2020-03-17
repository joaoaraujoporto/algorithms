#include <stdio.h>

int main() {
  int valor;
  int num_tipo_notas = 7; 
  int notas[num_tipo_notas];
  
  notas[0] = 100;
  notas[1] = 50;
  notas[2] = 20;
  notas[3] = 10;
  notas[4] = 5;
  notas[5] = 2;
  notas[6] = 1;
 
  while (scanf("%d", &valor) != EOF) {
    int i;
    int num_notas[num_tipo_notas];

    printf("%d\n", valor);
    
    for (i = 0; i < num_tipo_notas; i++)
      num_notas[i] = 0;
    
    for (i = 0; i < num_tipo_notas; i++) {
      num_notas[i] = valor/notas[i];      
      if ((valor = valor%notas[i]) == 0) break;   
    }
    
    for (i = 0; i < num_tipo_notas; i++)  
      printf("%d nota(s) de R$ %d,00\n", num_notas[i], notas[i]);
  }

  return 0;  
}
