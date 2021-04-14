#include<stdio.h>
#define MAX 100
typedef struct nhanvien{
	char nhanvien[30];
	char tinh[30];
	int nam;
}NV;
void nhap1( NV &nv){
	printf("\nNhap ten nhan vien: "); 
	fflush(stdin);
	gets(nv.nhanvien);
	printf("Nhap tinh: ");
	gets(nv.tinh);
	printf("Nhap nam: ");
	scanf("%d",nv.nam);
}
void nhap2( NV nv[] , int &n ){
	printf("Nhap so luong nhan vien: ");
	scanf("%d", &n);
	for(int i=1 ; i <n ; i++){
		printf("Nhap thong tin nhan vien %d: ", i);
		nhap1(nv[i]);
	}
	
	
	

}
int main(){
	int chon=0,n;
	nhanvien nv[MAX];
//	system("cls");
	printf("=================MENU========================");
	printf("\t\t\t\n |1. Nhap du lieu cua tung nhan vien.                                                    |");
    printf("\t\t\t\n |2. Sap xep, thong kê va hien thi thong tin chi tiet cua tung nhan vien theo tinh(Z-A). |");
    printf("\t\t\t\n |3. Tim nhan vien theo tinh.                                                            |");
    printf("\t\t\t\n |4. Ghi vao tap tin nhi phan employee.dat.                                              |");
    printf("\t\t\t\n |5. Thoat.                                                                              |");
    printf("\t\t\t ================================================\n");
    printf("Ban chon: ");
	scanf("%d", &chon);
	switch(chon){
		case 1:
			nhap2(nv,n);
			break;	
			
	}
	return 0;
}
