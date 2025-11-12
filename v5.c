#include <stdio.h>

int timphantu_nhieunhat(int a[], int n) {
  int maxcount = 0, phantu = a[0];
  for (int i = 0; i < n; i++) {
    int count = 0;
    for (int j = 0; j < n; j++) {
      if (a[i] == a[j]) count++;
    }
    if (count > maxcount) {
      maxcount = count;
      phantu = a[i];
    }
  }
  return phantu;
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
  int phantu = timphantu_nhieunhat(a, n);
  int solan = 0;
  for (int i = 0; i < n; i++) {
    if (a[i] == phantu) solan++;
  }
  printf("phan tu xuat hien nhieu nhat la %d, xuat hien %d lan\n", phantu, solan);
  return 0;
}
