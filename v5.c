#include <stdio.h>
int main() {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++) {
        printf("Nhap phan tu thu %d: ",i+1);
        scanf("%d",&a[i]);
    }
    int maxcount=0,phantu=a[0];
    for(int i=0;i<n;i++) {
        int count=0;
        for(int j=0;j<n;j++) {
            if(a[i]==a[j]) count++;
        }
        if(count>maxcount) {
            maxcount=count;
            phantu=a[i];
        }
    }
    printf("Phan tu xuat hien nhieu nhat la %d, xuat hien %d lan\n",phantu,maxcount);
    return 0;
}

