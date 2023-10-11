#include <stdio.h>
#include <conio.h>

int a[100];
int n;
void nhapmang(int n);
void xuatmang(int n);
void chen(int y);
void sapxep(int n);
void timx(int x);
int max(int n);
int tinhtich(int n);
void nguyento(int n);
void chen(int y);



int main(){
	int lon,tich,x,y;
	printf("\nnhap so phan tu cua mang a: ");
	scanf("%d", &n);
	nhapmang(n);
	xuatmang(n);
	chen(y);
	sapxep(n);
	timx(x);
	lon = max(n);
	printf("\ngia tri lon nhat trong mang la %d", lon);
	tich = tinhtich(n);
	printf("\ntich cac phan tu trong mang la %d",tich);	
	nguyento(n);

	
	
}

void nhapmang(int n){
	for(int i = 0; i < n; i++){
		printf("\na[%d] = ",i);
		scanf("%d", &a[i]);	
	}
}

void xuatmang(int n){
	printf("\nxuat mang: ");
	for(int i = 0; i < n;i++){
		printf("\t%d", a[i]);
	}
}

int tinhtich(int n){
	int t = 1;
	for(int i = 0; i < n; i++){
		t *= a[i];
	}
	return t;
}
int max(int n){
	int m = a[0];
	for(int i = 0; i < n;i++){
		if (m < a[i]){
			m = a[i];
		}
	}
	return m; 
}


void nguyento(int n){
	int count = 0, tong = 0;
	for(int i = 0; i < n; i++){
		int b = a[i];
		int count_vl = 0;
		for(int j = 1; j <= b; j++){
			if (b%j==0){
				count_vl += 1;
			}	
		}
		if (count_vl == 2){
			count = count + 1;
			tong = tong + a[i];
		}
	}
	printf("\nso cac so nguyen to co trong mang la %d", count);
	printf("\ntong cac so nguyen to co trong mang la %d", tong);
}

void timx(int x){
	int dem = 0;
	printf("\n\nnhap phan tu x can tim: ");
	scanf("%d", &x);
	printf("phan tu can tim: ");
	for(int i = 0; i < n; i++){
		if (a[i] == x){
			printf("a[%d]; ",i);
			dem += 1;
		}
	}
	if (dem == 0){
		printf("\nkhong thay phan tu trong mang.");
	}
}

void sapxep(int n){
	printf("\nmang sap xep la: ");
	for(int i = 1; i <= (n -1); i++){
		for(int j = 0; j < i;j++){
			if (a[i]<a[j]){
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
			
		}
	}
	xuatmang(n);
}

void chen(int x){
}

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	


