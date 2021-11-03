#include<stdio.h>
#include<conio.h>
main()
{ 
   char *Alamat_X,X;
   X='M';
   Alamat_X=&X;
   printf("Nilai variabel X,yaitu 'M' berada pada alamat %p\n",Alamat_X);
   getch();
}

