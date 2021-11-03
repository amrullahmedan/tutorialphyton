#include<stdio.h>
#include<conio.h>
main(){ 
int nilai[3],*point;
nilai[0] = 23;
nilai[1] = 99;
nilai[2] = 27;
point = &nilai[0];
printf("nilai %d ada di alamat memori  %p\n",*point,point);
printf("nilai %d ada di alamat memori  %p\n",*(point+1),point+1);
printf("nilai %d ada di alamat memori %p\n",*(point+2),point+2);
}

