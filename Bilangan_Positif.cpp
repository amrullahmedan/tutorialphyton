/* Program Menentukan Bilangan Positif atau Negatif */
#include<stdio.h>
#include <conio.h>
main()
{
int bil;
printf("Input sebuah bilangan = ");
scanf("%d",&bil);
if(bil>0)
 	printf("Adalah Bilangan Positif\n");
else if(bil==0)
	printf("Adalah NOL\n");
	else
		printf("Adalah Bilangan Negatif\n");
printf("Tekan sebarang tombol untuk keluar!!!");
getch();
} 
