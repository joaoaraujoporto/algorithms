#include <stdio.h>

void bucketsort(int m[], int m_size);

int main() {
  int N, Q;
  int test_case = 0;
  
  while (scanf("%d %d", &N, &Q)) {
    if (N == 0 && Q == 0) break;

    printf("CASE# %d:\n", ++test_case);
    int marble[N];
    int query[Q];
    
    int i;
    for (i = 0; i < N; i++) scanf("%d", &marble[i]);
    for (i = 0; i < Q; i++) scanf("%d", &query[i]);

    bucketsort(marble, N);
    
    for (i = 0; i < Q; i++) {
      int j;
      for (j = 0; j < N; j++)
	if (query[i] == marble[j]) {
	  printf("%d found at %d\n", query[i], j+1);
	  break;
	}

      if (j == N) printf("%d not found\n", query[i]);
    }
  }

  return 0;  
}

void bucketsort(int m[], int m_size) {
  int max_n = 10000;
  int buckets[max_n];

  int i;
  for (i = 0; i < max_n; i++)
    buckets[i] = 0;

  for (i = 0; i < m_size; i++)
    buckets[m[i]-1] += 1;
  
  int j = 0;
  for (i = 0; i < max_n; i++) {
    if (buckets[i] == 0) continue;

    int k;
    for (k = j; k < j + buckets[i]; k++)
      m[k] = i+1;

    j += k-j;
  }
}
