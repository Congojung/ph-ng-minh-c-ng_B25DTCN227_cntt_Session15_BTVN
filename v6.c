#include <stdio.h>

void bubblesort(int a[], int n) {
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (a[j] > a[j + 1]) {
        int temp = a[j];
        a[j] = a[j + 1];
        a[j + 1] = temp;
      }
    }
  }
}
int main() {
  int n;
  printf("nhap so phan tu: ");
  scanf("%d", & n);
  int a[n];
  for (int i = 0; i < n; i++) {
    printf("nhap phan tu %d: ", i + 1);
    scanf("%d", & a[i]);
  }
  printf("mang ban dau: ");
  for (int i = 0; i < n; i++) {
    printf("%d ", a[i]);
  }
  bubblesort(a, n);
  printf("\nmang sau khi sap xep tang dan: ");
  for (int i = 0; i < n; i++) {
    printf("%d ", a[i]);
  }
  return 0;
}
