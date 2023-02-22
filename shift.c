#include <stdio.h>

typedef unsigned char *pointer;

void show_bytes(pointer ptr, size_t size) {
  for (int i = 0; i < size; i++) {
    printf("%p = %.2x\n", ptr, ptr[i]);
  }
}

int main() {
  int x = 0xFEDCBA98;
  show_bytes((pointer)&x, sizeof(x));

  x = x >> 36;
  show_bytes((pointer)&x, sizeof(x));

  return 0;
}
