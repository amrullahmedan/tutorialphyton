/* Mencari total dan rata-rata sejumlah bilangan dengan for */
#include"stdio.h"
#include"conio.h"
main()
{  float r,i,x,t=0;
   int y;
   for(y=1;y<=3;y++)
 	for(i=0;i<=2;i++)
	{ 
	printf("Entry bilangan %i : ",y);
	scanf("%f",&x);
	t=t+x;
	y=y+1;
	}
	   printf("\n Total : %.1f",t);
	   r=t/i;
	   printf("\n Rata rata : %.1f",r);
	   getch();
	}

