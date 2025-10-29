#include <stdio.h>
int main (){
	int a,b,c;
	int chon;
	int tong , nho_nhat,lon_nhat;
	float trung_binh ;
	int  da_nhap = 0;
	 do{
	 
        printf("\n===== MENU =====\n");
        printf("1. Nhap 3 so nguyen\n");
        printf("2. Tong 3 so\n");
        printf("3. Trung binh cong 3 so\n");
        printf("4. So nho nhat\n");
        printf("5. So lon nhat\n");
        printf("6. Thoat\n");
        printf("Moi ban chon chuc nang (1-6): ");
        scanf("%d", &chon);  
		if (chon==1){
			    printf("Nhap so thu nhat: ");
                scanf("%d", &a);
                printf("Nhap so thu hai: ");
                scanf("%d", &b);
                printf("Nhap so thu ba: ");
                scanf("%d", &c);
                da_nhap=1; 
			
		} else if (chon==2){
			if (da_nhap == 0) {
                printf("Vui long nhap 3 so truoc!\n");
            } else {
                tong = a + b + c;
                printf("Tong 3 so la: %d\n", tong);
		} } 
		else if (chon == 3) {
            if (da_nhap == 0) {
                printf("Vui long nhap 3 so truoc!\n");
            } else {
                trung_binh = (a + b + c) / 3.0;
                printf("Trung binh cong 3 so la: %.2f\n", trung_binh);
        }} 
        else if (chon == 4) {
            if (da_nhap == 0) {
                printf("Vui long nhap 3 so truoc!\n");
            } else {
                nho_nhat = a;
                if (b < nho_nhat) nho_nhat = b;
                if (c < nho_nhat) nho_nhat = c;
                printf("So nho nhat la: %d\n", nho_nhat);
        }} 
        else if (chon == 5) {
            if (da_nhap == 0) {
                printf("Vui long nhap 3 so truoc!\n");
            } else {
                lon_nhat = a;
                if (b > lon_nhat) lon_nhat = b;
                if (c > lon_nhat) lon_nhat = c;
                printf("So lon nhat la: %d\n", lon_nhat);
        }} 
        else if (chon == 6) {
            printf("Ket thuc chuong trinh.\n");
        } 
        else {
            printf("Lua chon khong hop le\n. Vui long chon tu 1 den 6.\n");
        }

    } while (chon != 6);

    return 0;
} 

	
	
        

