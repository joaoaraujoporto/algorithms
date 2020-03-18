#include <stdio.h>

int main() {
  int num_tests;
  int num_rabbits = 0;
  int num_rats = 0;
  int num_frogs = 0;
  
  
  scanf("%d", &num_tests);

  int i;
  for (i = 0; i < num_tests; i++) {
    int num_animals_test;
    char animal_type;
    
    scanf("%d %c", &num_animals_test, &animal_type);

    switch (animal_type) {
    case 'C': num_rabbits += num_animals_test; break;
    case 'R': num_rats += num_animals_test; break;
    case 'S': num_frogs += num_animals_test; break;
    default: return 1;
    }
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
