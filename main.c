#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void nhap(int *ptr, int n);
void xuat(int *ptr, int n);
void max(int *ptr, int n);
void tich(int *ptr, int n);
void nguyento(int *ptr, int n);
void timx(int *ptr, int n);

int main(){
    int *ptr, n;
    printf("nhap so phan tu mang: ");
    scanf("%d", &n);
    ptr = (int *)malloc(n*sizeof(int));
    nhap(ptr, n);
    printf("\nmang da nhap la: ");
    xuat(ptr,n);
    max(ptr,n);
    tich(ptr,n);
    nguyento(ptr,n);
    timx(ptr,n);
    free(ptr);
    getch();
}


void nhap(int *ptr, int n){
    for(int i = 0; i < n; i++){
        printf("\na[%d] = ", i);
        scanf("%d", (ptr + i));
    }
}

void xuat(int *ptr, int n){
    for(int i = 0; i < n; i++){
        printf("\t%d", *(ptr +i));
    }
}

void max(int *ptr,int n){
    for(int i = 0; i < n; i++){
        if (*ptr < *(ptr + i)){
            *ptr = *(ptr + i);
        }
    }
    printf("\nphan tu co gia tri lon nhat la %d",*ptr);
}

void tich(int *ptr, int n){
    int product = 1;
    for(int i = 0; i < n; i++){
        product *= *(ptr + i);
    }
    printf("\ntich cac phan tu trong mang la %d", product);
}

void nguyento(int *ptr, int n){
    int count = 0, tong = 0;
    for(int i = 0; i < n; i++){
        int count_vl = 0;
        for(int j = 1; j <= *(ptr + i); j++){
            if (*(ptr + i) % j == 0){
                count_vl += 1;
            }
        }
        if (count_vl == 2){
            count =count + 1;
            tong = tong + *(ptr + i);
        }
    }
    printf("\nso cac so nguyen to co trong mang la %d", count);
    printf("\ntong cac so nguyen to co trong mang la %d", tong);
}

void timx(int *ptr, int n){
    int count = 0,x;
    printf("\nnhap phan tu can tim: ");
    scanf("%d",&x);
    printf("phan tu can tim: ");
    for(int i = 0; i < n; i++){
        if (*(ptr + i) == x){
            printf("a[%d]", i);
            count += 1;
        }
    }
    if (count == 0){
        printf("khong co phan tu can tim.");
    }
}