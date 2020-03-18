#include <stdio.h>

void print(int m[], int m_size) {
  int i;
  for (i = 0; i < m_size; i++) printf("%d\n", m[i]);
}

void bucketsort(int m[], int m_size) {
  int buckets[m_size];

  int i;
  for (i = 0; i < m_size; i++)
    buckets[i] = 0;

  for (i = 0; i < m_size; i++)
    buckets[m[i]-1] += 1;

  int j = 0;
  for (i = 0; i < m_size; i++) {
    if (buckets[i] == 0) continue;

    int k;
    for (k = j; k < j + buckets[i]; k++)
      m[k] = i+1;

    j += k-j;
  }
}

int main() {
  int m_size = 5;
  int m[5] = {4, 3, 2, 1, 3};

  bucketsort(m, m_size);

  print(m, m_size);
}
