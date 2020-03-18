#include <stdio.h>

int main() {

  int n = 3;
  int funcs[n];
  int cost[n];
  
  int i;
  for (i = 0; i < n; i++) scanf("%d", &funcs[i]);

  cost[0] = funcs[1] * 2 + funcs[2] * 4;
  cost[1] = funcs[0] * 2 + funcs[2] * 2;
  cost[2] = funcs[0] * 4 + funcs[1] * 2;

  int lower_cost = cost[0];

  for (i = 1; i < n; i++)
    if (lower_cost > cost[i])
      lower_cost = cost[i];

  printf("%d\n", lower_cost);  

  return 0;  
}
