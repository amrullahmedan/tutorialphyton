#include <stdio.h>
#include <conio.h>
main(){ 
short s_nilai = 1;
int i_nilai = 1;
long l_nilai = 10000;
char c_nilai = 97; /* inisialisasi karakter dengan integer */
char c1_nilai = 'Z'; /* inisialisasi karakter dengan karakter */
float x = 12.987432023;
/* penulisan karakter sebagai karakter */
printf ("Karakter = %c\n", c_nilai);
printf ("Karakter = %i\n", c1_nilai);
/* penulisan karakter sebagai integer */
printf ("Karakter = %d\n", c_nilai);
printf ("Karakter = %d\n", c1_nilai);
printf ("Bilangan integer (short) = %d\n", s_nilai);
printf ("\t\t(int) = %d\n", i_nilai);
printf ("\t\t(long) = %ld\n", l_nilai); 
printf ("Bilangan Real = %8.5f\n", x);
}

