#include <stdio.h>
void bubblesort(int a[], int n) {
    for (int i=0;i<n-1;i++) {
        for (int j=0;j<n-i-1;j++) {
            if (a[j]>a[j+1]) {
                int temp =a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
int main() {
    int a[]={5,2,8,3,1,7};
    int n=sizeof(a)/sizeof(a[0]);
    printf("Mang ban dau: ");
    for (int i=0;i<n;i++) {
        printf("%d ", a[i]);
    }
    bubblesort(a,n);
    printf("\nMang sau khi sap xep tang dan: ");
    for (int i=0;i<n;i++) {
        printf("%d ",a[i]);
    }
    return 0;
}

