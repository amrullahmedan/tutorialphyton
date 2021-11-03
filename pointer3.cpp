#include<stdio.h>
#include<conio.h>
main(){ 
float nilai, *X1,*X2;
nilai = 23.99;
X1=&nilai;
X2=X1;
printf("nilai variabel nilai ada di alamat memori %p\n",X1);
printf("nilai variabel nilai ada di alamat memori %p\n",X2);
}

