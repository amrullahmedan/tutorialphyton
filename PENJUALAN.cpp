/* Program Menentukan Kelulusan */
#include <stdio.h>
#include <conio.h>
main()
{
  int nilai;
  int bil1,bil2; 
    printf("Input nilai anda = ");scanf("%d",&nilai);
  if (nilai>=60)
     {
	printf("\nSelamat!!! Anda Lulus\n");
	printf("Makan-makannya mana??\n");
     }
  printf("Contoh Program dengan if-else ");
  if (nilai>=60)
    {
	printf("\nSelamat!!! Anda Lulus\n");
	printf("Makan-makannya mana??\n");
    }
  else
    {
	printf("\nAnda GAGAL!!!\n");
	printf("Silakan mengulang semester depan\n");
    }

  printf("Contoh If Tersarang\n");
  printf("Input dua buah bilangan = \n");
  scanf("%d %d",&bil1, &bil2);
  if(bil1>0)
     if(bil2 > 0)
 	printf("Nilai bil1 dan bil 2 Adalah Positif\n");
     else 
       printf("Nilai bil1 Positif dan bil 2 Negatif\n");
  else
     printf("Nilai bil1 Adalah Negatif\n");

  printf("Tekan sebarang tombol untuk keluar!!!");
  getch();
}

