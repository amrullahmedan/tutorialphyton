#include<stdio.h>
#include<conio.h>
main()
{
int input,a,b,c; //mendeklarasikan sebagai integer
printf("\t\t\t Amrullah \n"); //mencetak nama
printf("Masukkan angka =");
scanf("%d",&input); //membaca nilai yang diinputkan
printf("factorial dari %d",input); printf(" adalah= ");
for (a=1;a<=input;a++) //perulangan dari 1 sampai angka yang diinput
printf("%dx",a); //menampilkan 1x2x.......nx
b=1;
for(c=1;c<=input;c++) //perulangan dari 1 sampai angka yang diinput
b=b*c; //perkalian perulangan
printf(" = %d",b); //menampilkan hasil perkalian (Factorial)
getch();
}
