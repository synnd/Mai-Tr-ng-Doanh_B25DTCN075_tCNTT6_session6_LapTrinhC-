#include <stdio.h>
 int main(){
 	int n;
 	int i; 
	 printf ("Nhap vao so nguyen duong N tu 1 den 10  ");
	 scanf ("%d",&n) ;
	 while (n<=0||n>10){
	 	printf ("Vui long nhap so nguyen duong\n ");
		 printf ("Nhap lai N ");
		 scanf ("%d",&n); 
	 }  
	 printf ("Bang cuu chuong cua %d\n",n);
	 for (i=1;i<=10;i+=1){
	 	printf ("%d*%d=%d\n",n,i,n*i) ;
	 } 
	 return 0; 
 } 
