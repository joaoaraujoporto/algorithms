#include <stdio.h>

int main() {
  int time, velocity;
  
  while (scanf("%d %d", &time, &velocity) != EOF) {
    int dist = velocity * time;
    float fuel = (float) dist/12;
    
    printf("%.03f\n", fuel);
  }

  return 0;  
}
