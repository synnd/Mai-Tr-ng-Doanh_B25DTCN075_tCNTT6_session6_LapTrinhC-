#include <stdio.h>
int main (){
int n;
printf ("Nhap vao mot so nguyen: ");
scanf ("%d",&n);
if (n<0){
	n=-n ;
} 

 if (n==0){
 	printf ("Cac chu so la: %d",n); 
 	return 0; 
 } 
           // dao nguoc so truoc de lay thu tu tu phai sang trai 
 int so_du ;
 int so_dao=0;
 int chu_so ;
 	while (n!=0){
	so_du  = n % 10;                    // chia lay du tung chu so  
	so_dao = so_dao * 10 + so_du;      // lan1 so_dao= 0*10+so_du   
	n = n/10;                         // bo chu so vua in va tiep tuc chia  
}
   // in ra thu tu ban dau
   printf ("Thu tu cac chu so tu trai sang phai la: "); 
   while (so_dao != 0){
   	chu_so = so_dao %10 ;          // lay so dao o tren chia lay du roi in ra  
   	printf (" %d ",chu_so);

	 so_dao = so_dao/10;          //bo chu so vua in va lap tiep

   }   

    return 0; 

}



