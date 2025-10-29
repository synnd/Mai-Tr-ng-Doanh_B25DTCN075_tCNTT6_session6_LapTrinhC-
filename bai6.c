#include <stdio.h>
int main (){
	float  a ,b ;
	int phep_tinh ; 
	float  tong, hieu , tich , thuong; 
	printf ("Nhap vao so thu nhat ");
	scanf ("%f",&a);
	printf ("Nhap vao so thu hai ");
	scanf ("%f",&b); 
	do {
	printf ("--------MENU---------\n") ;
	printf (" 1.Tong 2 so\n 2.Hieu 2 so\n 3.Tich 2 so\n 4.Thuong 2 so\n 5.Thoat\n");
	scanf ("%d",&phep_tinh );
	
	
	if  (phep_tinh>5||phep_tinh<0){
			printf ("So khong hop le\n");
			printf ("Vui long nhap lai (1-5)\n"); 
			 continue ; 
	  }
	     
	   if (phep_tinh==1) {
	 	tong= a + b ;
		 printf ("Tong 2 so la: %.2f\n",tong) ;
	 } else if (phep_tinh==2){
	 	hieu = a - b ;
	 	printf ("Hieu 2 so la: %.2f\n",hieu); 
	 } else if (phep_tinh==3){
	 	tich  = a * b ;
	 	printf ("Tich 2 so la: %.2f\n",tich); 
	 } else if (phep_tinh==4){
	 	while (b==0){
	 		printf ("Khong the chia cho 0\n ");
			 printf ("Nhap lai so thu hai: ") ;
			 scanf ("%f",&b) ; 
		 }  
	 	  thuong  = a / b ;
	 	  printf ("Thuong 2 so la: %.2f\n",thuong);
    	} else if  ( phep_tinh==5 ) {
		   printf ( "Thoat chuong trinh\n" ); 
  		
		} 
			 
		} while (phep_tinh!=5); 
		
		} 
	
	 

 
