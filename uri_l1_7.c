#include <stdio.h>

int main() {
  int num_tests;
  
  scanf("%d", &num_tests);

  int sheldon_rection[num_tests];
  
  int i;
  for (i = 0; i < num_tests; i++) {
    char choice1[7], choice2[7];
    
    scanf("%s %s", choice1, choice2);

    
  }

  int animals_total = num_rabbits + num_rats + num_frogs;
  
  printf("Total: %d cobaias\n", animals_total);
  printf("Total de coelhos: %d\n", num_rabbits);
  printf("Total de ratos: %d\n", num_rats);
  printf("Total de sapos: %d\n", num_frogs);
  printf("Percentual de coelhos: %.02f %%\n", (float)num_rabbits/animals_total * 100);
  printf("Percentual de ratos: %.02f %%\n", (float)num_rats/animals_total * 100);
  printf("Percentual de sapos: %.02f %%\n", (float)num_frogs/animals_total * 100);
  
  return 0;  
}
