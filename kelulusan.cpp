/* Program Menentukan Kelulusan */
#include <stdio.h>
#include <conio.h>
main(){
int nilai;
//clrscr();
printf("Input nilai anda = ");
scanf("%d",&nilai);
if (nilai>=60)
{
	printf("\nSelamat!!! Anda Lulus\n");
	printf("Makan-makannya mana??\n");
}

else {
	printf("\nAnda GAGAL!!!\n");
	printf("Silakan mengulang semester depan\n");
	}

printf("Tekan sebarang tombol untuk keluar!!!");
getch();
}

