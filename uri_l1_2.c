#include <stdio.h>

int main() {
  char name[50];
  double wage, sells;
  
  while (scanf("%s %le %le", name, &wage, &sells) != EOF) {
    double total = wage + 0.15*sells;
    printf("TOTAL = R$ %.02f\n", total);
  }

  return 0;  
}
