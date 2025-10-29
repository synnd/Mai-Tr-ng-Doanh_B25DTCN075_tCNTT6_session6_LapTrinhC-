# include <stdio.h> 
int main (){
	int a , b , i , ucln ;
	printf ("Nhap vao so thu nhat ");
	scanf ("%d",&a);
	printf ("Nhap vao so thu hai ");
	scanf ("%d",&b);
	ucln = 1;
	for (i=1;i<=a && i<=b;i++){
		if (a%i==0&&b%i==0){
			ucln=i ;
		} 
	} 
	printf ("Uoc chung lon nhat cua %d va %d la: %d",a,b,ucln);
	return 0; 
} 
