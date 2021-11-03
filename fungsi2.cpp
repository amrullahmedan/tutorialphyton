#include "stdio.h"
#include "conio.h"
#include "math.h"
 main(){
//clrscr(); 
float sudut;
printf("Menghitung nilai sinus, cosinus dan tangens\n\n");
printf("Masukkan sudut : "); scanf("%f", &sudut);
printf("Nilai sinus %.2f derajat = %.3f \n\n", sudut, sin(sudut));
printf("Nilai cosinus %.2f derajat = %.3f \n\n", sudut, cos(sudut));
printf("Nilai tangens %.2f derajat = %.3f \n\n", sudut, tan(sudut));

}

