#include <stdio.h>
int timkiemso(int a[],int n,int x) {
    int left=0,right=n-1;
    while (left<=right) {
        int mid=(left+right)/2;
        if (a[mid]==x)
            return mid;     
        else if (a[mid]<x)
            left=mid+1; 
        else
            right=mid-1; 
    }
    return -1; 
}
int main() {
    int a[]={1,3,5,7,9,11};
    int n=6;
    int x;
    printf("Nhap so can tim: ");
    scanf("%d",&x);
    int kq=timkiemso(a,n,x);
    if (kq!=-1)
        printf("Tim thay %d tai vi tri %d\n",x,kq);
    else
        printf("Khong tim thay %d trong mang\n",x);
    return 0;
}

