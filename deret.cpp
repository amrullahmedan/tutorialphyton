/* Program mencetak deret bilangan genap antara 1 – 100 */
#include <stdio.h>
#include <conio.h>
main()
{ 
int bil;
//clrscr(); 
for (bil=1; bil<100; bil++)
{ if(bil % 2 == 0) /* periksa apakah ‘bil’ genap */
  printf("%5i", bil);
}
getch();
}

