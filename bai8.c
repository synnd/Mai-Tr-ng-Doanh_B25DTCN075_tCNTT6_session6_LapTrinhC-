#include <stdio.h>
int main (){
	int a,b,i,bcnn,ucln ;
	printf ("Nhap vao so thu nhat ");
	scanf ("%d",&a);
	printf ("Nhap vao so thu hai ");
	scanf ("%d",&b);
	ucln = 1;
	for (i=1;i<=a&&i<=b;i++){
		if (a%i==0&&b%i==0){
			ucln=i ;
		} 
	} 
	bcnn = (a*b)/ucln ;
	printf ("Boi chung no nhat cua %d va %d la: %d",a,b,bcnn); 
	return 0; 
	
} 
