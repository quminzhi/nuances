#include <stdio.h>

void inplace_swap(int *x, int *y) {
  *y = *x ^ *y;
  *x = *x ^ *y;
  *y = *x ^ *y;
}

void reverse_array(int a[], int size) {
  for (int first = 0, last = size - 1; first <= last; first++, last--) {
    inplace_swap(&a[first], &a[last]);
  }
}

int main(int argc, char *argv[]) {
  // does not work when the length of array is odd.
  // why? first and last point to the same location, whereas 'inplace-swap'
  // works when x and y point to different localtion. Otherwise, the info will
  // be overwritten in the case where they point to the same localtion.
  int a[] = {1, 2, 3, 4, 5};
  int size = sizeof(a) / sizeof(a[0]);

  reverse_array(a, size);

  for (int i = 0; i < size; i++) {
    if (i == size - 1) {
      printf("%d\n", a[i]);
    } else {
      printf("%d, ", a[i]);
    }
  }

  return 0;
}
