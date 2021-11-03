/* Program memasukan inputan dengan beberapa format tipe data */
#include <stdio.h>
#include <conio.h>
main(){ 
int jumlah; char huruf, nim[10]; float nilai;
/*clrscr();
printf("Masukkan sebuah bilangan bulat : ");
scanf("%d", &jumlah ); /* membaca sebuah bilangan bulat */
printf("Masukkan sebuah karakter : ");
scanf("%c", &huruf ); /* membaca sebuah karakter */
printf("Masukkan nim Anda : ");
scanf("%s", &nim ); /* membaca sebuah string */
printf("Masukkan sebuah bilangan pecahan : ");
scanf("%f", &nilai ); /* membaca sebuah bilangan float */
printf("\nNilai variable yang Anda masukkan adalah :\n");
printf("jumlah = %d\n", jumlah );
printf("huruf = %c\n", huruf );
printf("nim = %s\n", nim );
printf("nilai = %f\n", nilai );
getch();
}

