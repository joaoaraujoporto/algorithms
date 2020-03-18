#include <stdio.h>

int main() {
  int N;
  
  while (scanf("%d", &N)) {
    if (N == 0) break;

    int matches[N];
    int joao_won_times = 0;
    
    int i;
    for (i = 0; i < N; i++) scanf("%d", &matches[i]);
    for (i = 0; i < N; i++) joao_won_times += matches[i];

    printf("Mary won %d times and John won %d times\n", (N-joao_won_times), joao_won_times); 
  }

  return 0;  
}
