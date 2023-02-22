int sum_elements(int a[], unsigned size) {
  int sum = 0;
  for (int i = 0; i <= size - 1; i++) {
    sum += a[i];
  }
  return sum;
}

int main() {
  int a[] = {};
  int sum = sum_elements(a, sizeof(a) / sizeof(a[0]));

  return 0;
}
