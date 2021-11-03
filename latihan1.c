#include <stdio.h>
#include <conio.h>
main()
{
int banyak ;
float potongan, biaya, harga;
float to,ha;
char nama [20];
printf("\t\t\t aplikasi pencetakan stiker");
printf("\n input data");
printf("\n nama :");scanf("%s",nama);
printf(" banyak stiker :"); scanf("%d",&banyak);
printf("\n\n hasil perhitungan"); ha =6000;
if(banyak<=100)
{
biaya=6000*banyak;
potongan=biaya*0.0;
to=biaya-potongan;
printf("\n nama konsumen :%s",nama);
printf("\n banyak stiker :%d",banyak);
printf("\n harga per-stiker :Rp.6000");
printf("\n biaya stiiker :Rp %0.1f",biaya);
printf("\n====================================");
printf("\n Total pembayaran : Rp %0.1f",to);
}else if(banyak>=100&&banyak<=300){
biaya=6000*banyak;
potongan=biaya*0.05;
to=biaya-potongan;
printf("\n nama konsumen :%s",nama);
printf("\n banyak stiker :%d",banyak);
printf("\n harga per-stiker :Rp.6000");
printf("\n biaya stiiker :Rp %0.1f",biaya);
printf("\n potongan 5-persen :Rp %0.1f",potongan);
printf("\n ====================================");
printf("\n Total pembayaran : Rp %10.2f",to);
}else if(banyak>=300&&banyak<=500){
biaya=6000*banyak;
potongan=biaya*0.12;
to=biaya-potongan;
printf("\n nama konsumen :%s",nama);
printf("\n banyak stiker :%d",banyak);
printf("\n harga per-stiker :Rp.6000");
printf("\n biaya stiiker :Rp %0.1f",biaya);
printf("\n potongan 12-persen :Rp %0.1f",potongan);
printf("\n ====================================");
printf("\n Total pembayaran : Rp %10.2f",to);
}else {
biaya=6000*banyak;
potongan=biaya*0.2;
to=biaya-potongan;
printf("\n nama konsumen :%s",nama);
printf("\n banyak stikrrt :%d",banyak);
printf("\n harga per-stiker :Rp.6000");
printf("\n biaya stiiker :Rp %0.1f",biaya);
printf("\n potongan 20-persen :Rp %0.1f",potongan);
printf("\n ====================================");
printf("\n Total pembayaran : Rp %0.1f",to);}
getch(); }
