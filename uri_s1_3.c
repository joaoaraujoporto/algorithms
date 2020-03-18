#include <stdio.h>
#include <string.h>

int main() {
  int test_cases;
  scanf("%d", &test_cases);

  int i;
  for (i = 0; i < test_cases; i++) {
    char strings[50][51];
    int n_strings = 0;

    scanf("%s", strings[n_strings]);
    while (strcmp(strings[n_strings], "\n") != 0) {
      n_strings++;
      scanf("%s", strings[n_strings]);
    }

    
    int j;
    for (j = 0; j < n_strings-1; j++)
      printf("%s ", strings[j]);

      printf("%s\n", strings[n_strings-1]);
  }
  
  return 0;
}
