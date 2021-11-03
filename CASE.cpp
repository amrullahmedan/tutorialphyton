/* Program Menentukan Karakter yang Diinput */
#include<stdio.h>
#include<conio.h>
main()
{
  char pilih;
  printf("masukkan karakter a-c = ");
  scanf("%c",&pilih);
  switch(pilih)
  {
    case 'a' :
	printf("OK anda pilih a\n");	    
	break;
    case 'b' :
	printf("OK.. anda pilih b\n");	    
	break;
    case 'c' :
	printf("Waw anda memilih c\n");	    
	break;
	/* lanjutan programnya */
default:
printf("Anda tidak memilih apapun!\n");
break;
  }
  getch();
 }


