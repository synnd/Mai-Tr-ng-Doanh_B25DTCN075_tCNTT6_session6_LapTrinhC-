#include <stdio.h>
int main (){
    int n;
    printf ("Nhap vao mot so nguyen: ");
    scanf ("%d",&n);

    if (n < 0){
        n = -n;
    }

    if (n == 0){
        printf ("Thu tu cac chu so tu trai sang phai la: 0\n");
        return 0;
    }

    int temp  = n;
    int so_dao = 0;

    while (n > 0){
        int so_du = n % 10;
        so_dao = so_dao * 10 + so_du;
        n = n / 10;
    }

    printf ("Thu tu cac chu so tu trai sang phai la: ");

    while (so_dao > 0){
        int chu_so = so_dao % 10;
        printf (" %d ", chu_so);
        so_dao = so_dao / 10;
    }

    while (temp  % 10 == 0 && temp  != 0) {
               
        if (so_dao == 0) {
            printf(" 0 ");
        }
        temp  = temp  / 10;
    }

    printf ("\n");
    return 0;
}
