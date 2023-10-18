#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int a[100], *p;

void nhap(int *a, int n);
void xuat(int *a, int n);
void max(int *a, int n);
void tinhtich(int *a, int n);
void nguyento(int *a, int n);


int main(){
    int n;
    printf("nhap so phan tu mang: ");
    scanf("%d",&n);
    nhap(a,n);
    printf("\nphan tu da nhap: ");
    xuat(a,n);
    printf("\n");
    max(a,n);
    printf("\n");
    tinhtich(a,n);
    printf("\n");
    nguyento(a,n);
    printf("\n");
    
}

void nhap(int *a, int n){
    for(int i = 0; i< n; i++){
        printf("\na[%d] = ", i);
        scanf("%d",(a + i));
    }
}

void xuat(int *a, int n){
    for(int i = 0; i < n; i++){
        printf("\t%d", *(a + i));
    }
    printf("\n");
}

void max(int *a, int n){
    int max_ham = *a;
    for(int i = 0; i < n; i++){
        if (*a < *(a + i)){
            max_ham = *(a + i);
        }
    }
    printf("phan tu co gia tri lon nhat la %d", max_ham);
    printf("\n");
}

void tinhtich(int *a, int n){
    int tich  = 1;
    for(int i = 0; i < n; i++){
        tich *= *(a + i);
    }
    printf("tich cac phan tu co trong mang la %d",tich);
}

void nguyento(int *a, int n){
    int count = 0, tong = 0;
    for(int i = 0; i < n; i++){
        int count_vl = 0;
        for(int j = 1; j <= *(a + i); j++){
            if(*(a + i) % j == 0){
                count_vl += 1;
            }
        }
        if (count_vl == 2){
            count += 1;
            tong += *(a + i);
        }
        
    }
    printf("\nso cac so nguyen to co trong mang la %d",count);
    printf("\n");
    printf("\ntong ca so nguyen to co trong mang la %d", tong);
    
}