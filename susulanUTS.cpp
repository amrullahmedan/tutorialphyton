#include<stdio.h>
#include<conio.h>
int main(void)
{
int NilaiDesimal;
int Ribuan,SisaRibuan, PuluhanRibu;
int Ratusan,SisaRatusan;
int Puluhan, Satuan;
//Masukan nilai yang
printf("Masukan nilai desimal (1-5000) : ");scanf("%d",&NilaiDesimal);
if(NilaiDesimal<0 || NilaiDesimal > 5000)
{
printf("Maaf nilai yang dimasukan melebihi batas\n");
}
else
{
printf("Terbilang : \" ");
//Jumlah ribuan
Ribuan = NilaiDesimal / 1000;//hitung ribuan
SisaRibuan= NilaiDesimal % 1000;//hitung sisa ribuan
//tampilkan nilai ribuan
switch(Ribuan)
{
case 1 : printf("Seribu "); break;
case 2 : printf("Dua Ribu ");break;
case 3 : printf("Tiga Ribu ");break;
case 4 : printf("Empat Ribu "); break;
case 5 : printf("Lima Ribu "); break;
}
//Jumlah ratusan
Ratusan = SisaRibuan / 100;//hitung ratusan
SisaRatusan= SisaRibuan % 100;//hitung sisa ratusan
//tampilkan nilai ratusan
switch(Ratusan)
{
case 1 : printf("Seratus ");break;
case 2 : printf("Dua Ratus ");break;
case 3 : printf("Tiga Ratus "); break;
case 4 : printf("Empat Ratus ");break;
case 5 : printf("Lima Ratus "); break;
case 6 : printf("Enam Ratus "); break;
case 7 : printf("Tujuh Ratus "); break;
case 8 : printf("Delapan Ratus "); break;
case 9 : printf("Sembilan Ratus "); break;
}
//Jumlah puluhan
//jika sisa ratusan antara 11-19 maka
if(SisaRatusan > 10 && SisaRatusan < 20)
{
//tampilkan belasan
switch(SisaRatusan)
{
case 11 : printf("Sebelas");break;
case 12 : printf("Dua Belas ");break;
case 13 : printf("Tiga Belas "); break;
case 14 : printf("Empat Belas ");break;
case 15 : printf("Lima Belas "); break;
case 16 : printf("Enam Belas "); break;
case 17 : printf("Tujuh Belas "); break;
case 18 : printf("Delapan Belas "); break;
case 19 : printf("Sembilan Belas "); break;
}
}
else //jika sisaratusan lebih dari 20 maka
{
Puluhan = SisaRatusan / 10;//hitung puluhan
Satuan= SisaRatusan % 10;//hitung satuan
//tampilkan puluhan
switch(Puluhan)
{
case 1 : printf("Sepuluh");break;
case 2 : printf("Dua Puluh ");break;
case 3 : printf("Tiga Puluh "); break;
case 4 : printf("Empat Puluh ");break;
case 5 : printf("Lima Puluh "); break;
case 6 : printf("Enam Puluh "); break;
case 7 : printf("Tujuh Puluh "); break;
case 8 : printf("Delapan Puluh "); break;
case 9 : printf("Sembilan Puluh "); break;
case 11: printf("Sebelas "); break;
}
//tampilkan satuan
switch(Satuan)
{
case 1 : printf("Satu");break;
case 2 : printf("Dua ");break;
case 3 : printf("Tiga "); break;
case 4 : printf("Empat ");break;
case 5 : printf("Lima "); break;
case 6 : printf("Enam "); break;
case 7 : printf("Tujuh "); break;
case 8 : printf("Delapan "); break;
case 9 : printf("Sembilan "); break;
}
}
printf("\" \n");
}
getch();
return 0;
}
