#include "stdio.h"
#include "conio.h"
#include "math.h"
main(){ 
int x, y;
float z;
printf("Menghitung x pangkat y\n");
printf("x = "); scanf("%i", &x);
printf("y = "); scanf("%i", &y);
printf("%i dipangkatkan dengan %i = %7.2lf", x, y, pow(x, y));
getch();
printf("Menghitung akar suatu bilangan z\n");
printf("z = "); scanf("%f", &z);
printf("Akar dari %f adalah %7.2lf", z, sqrt(z));
getch();
}

