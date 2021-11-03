#include<stdio.h>
#include<conio.h>
main(){ 
char *Alamat_X,X,Y,Z;
X='M';
Alamat_X=&X;
Y=X;
Z=*Alamat_X;
printf("Nilai variabel X adalah %c\n",X);
printf("Nilai variabel Y adalah %c\n",Y);
printf("Nilai variabel Z adalah %c\n",Z);
printf("Nilai variabel X berada pada alamat %p\n",Alamat_X);
getch();
} 

