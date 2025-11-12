#include <stdio.h>

int timkiemso(int a[], int n, int x) {
  int left = 0, right = n - 1;
  while (left <= right) {
    int mid = (left + right) / 2;
    if (a[mid] == x)
      return mid;
    else if (a[mid] < x)
      left = mid + 1;
    else
      right = mid - 1;
  }
  return -1;
}
int main() {
  int n;
  printf("nhap so phan tu: ");
  scanf("%d", & n);
  int a[n];
  printf("nhap cac phan tu (da sap xep tang dan):\n");
  for (int i = 0; i < n; i++) {
    printf("phan tu %d: ", i + 1);
    scanf("%d", & a[i]);
  }
  int x;
  printf("nhap so can tim: ");
  scanf("%d", & x);
  int kq = timkiemso(a, n, x);
  if (kq != -1)
    printf("tim thay %d tai vi tri %d\n", x, kq);
  else
    printf("khong tim thay %d trong mang\n", x);
  return 0;
}
 
