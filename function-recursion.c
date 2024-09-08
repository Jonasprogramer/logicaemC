#include <stdio.h>

int sum(int k);

int main() {
  int result = sum(10);
  printf("%d", result);
  return 0;
}

int sum(int k) {
  if (k > 0) {
    return k + sum(k - 1); //chamar a mesma funçao ate k < 0 e finalizar a operação
  } else {
    return 0;
  }
}
