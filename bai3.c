#include <stdio.h>
int main (){
	int N,sum =0, i ;
	printf ("Nhap vao so nguyen duong  N ") ;
	scanf ("%d",&N) ;
	while  (N<=0){
		printf ("Vui long nhap so nguyen duong\n "); 
		printf ("Nhap lai N: ") ;
		scanf ("%d",&N); 
	} 

	for (i=1;i<=N;i++){
		sum +=i; 
	}
	printf ("Tong cac so tu 1 den %d la: %d",N,sum ) ; 
	return 0; 
	} 
 
