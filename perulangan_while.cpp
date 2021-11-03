/* Program Perulangan menggunakan while */
#include "stdio.h"
#include "conio.h"
main()
{

   int x;
   x = 1; /* awal variabel */
   while (x <= 10) /* Batas akhir perulangan */
   { 
	printf("%d BAHASA C\n", x);
	x++; /* variabel x ditambah dengan 1 */
	   }
   getch();
}
