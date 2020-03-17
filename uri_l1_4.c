#include <stdio.h>
#include <math.h>

int main() {
  double a, b, c;
  
  while (scanf("%le %le %le", &a, &b, &c) != EOF) {
    double delta;

    if (a == 0 || (delta = b*b - 4*a*c) < 0) {
      printf("Impossivel calcular\n");
      continue;
    }

    double x1 = (-b + sqrt(delta))/(2*a);
    double x2 = (-b - sqrt(delta))/(2*a);
    
    printf("R1 = %.05f\n", x1);
    printf("R2 = %.05f\n", x2);
  }

  return 0;  
}
