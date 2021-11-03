#include "stdio.h"
#include "conio.h"
 main(){ 
char *nama1 = "SPIDERMAN";
char *nama2 = "GATOTKACA";
char namax;
//clrscr();
puts("SEMULA :");
printf("Saya suka >> %s\n", nama1);
printf("Tapi saya juga suka >> %s\n", nama2);
/* Penukaran string yang ditunjuk oleh pointer nama1 dan nama2 */
printf("SEKARANG :");
printf("Saya suka >> %s\n", nama1);
printf("Dan saya juga masih suka >> %s\n", nama2);
getch();
} 

