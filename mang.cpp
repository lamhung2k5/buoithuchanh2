#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void nhap(int *a, int n);
void xuat(int *a, int n);
void max(int *a, int n);
void tinhtich(int *a, int n);
void nguyento(int *a, int n);
void timx(int *a, int n);
void sapxep(int *a, int n);
void chen(int *a, int n);
void xoa(int *a, int n);


int main(){
    int n;
    printf("nhap so phan tu mang: ");
    scanf("%d",&n);
    int *a = (int*)malloc(n*sizeof(int));
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
    timx(a,n);
    printf("\nmang sau khi sap xep: ");
    sapxep(a,n);
    printf("\n");
    chen(a,n);
    printf("\n");
    xoa(a,n);
    free(a);
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
        if (max_ham < *(a + i)){
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

void timx(int *a, int n){
    int count = 0, x;
    printf("\nnhap phan tu x can tim: ");
    scanf("%d",&x);
    printf("\nphan tu x can tim: ");
    for(int i = 0; i < n; i++){
        if(*(a + i) == x){
            printf("\ta[%d]", i);
            count += 1;
        }
    }
    if (count == 0){
        printf("x khong ton tai");
    }
}

void sapxep(int *a, int n){
	for(int i = 1; i <= n-1; i++){
		for(int j = 0; j < i; j++){
			if (*(a + i) < *(a + j)){
				int temp = *(a + i);
				*(a + i) = *(a + j);
				*(a + j) = temp;
			}
		}
	}
	xuat(a,n);
}

void chen(int *a,int n){
	n++;
	a = (int*)realloc(a,n*sizeof(int));
	int vitri;
	int giatri;
	printf("\nnhap gia tri can chen: ");
	scanf("%d",&giatri);
	printf("\nnhap vi tri can chen (vi tri nam trong khoang tu 0 den n): ");
	scanf("%d", &vitri);
	for(int i = n - 1; i > vitri; i--){
		a[i] = a[i - 1];
	}
	a[vitri] = giatri;
	printf("\nmang sau khi chen: ");
	xuat(a,n);
}

void xoa_phan_tu_co_gia_tri_1(int *a, int n) {
  /* Kh?i t?o bi?n d?m */
  int count = 0;

  /* Duy?t qua t?ng ph?n t? trong m?ng */
  for (int i = 0; i < n; i++) {
    if (a[i] == 1) {
      count++;
    }
  }

  /* D?ch chuy?n các ph?n t? trong m?ng sang trái */
  for (int i = 0; i < n - count; i++) {
    a[i] = a[i + count];
  }

  /* Ch?nh s?a kích thu?c m?ng */
  n -= count;
}


