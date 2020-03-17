#include <stdio.h>

int main() {
  int parc1, parc2;
  
  while (scanf("%d %d", &parc1, &parc2) != EOF)
    printf("SOMA = %d\n", parc1 + parc2);

  return 0;  
}
