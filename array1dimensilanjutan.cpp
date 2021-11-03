#include <stdio.h>
int main()
{
	int i;
	int nilai[5];
	
	printf("inputan data \n");
	for (i=0; i<5; i++)
	scanf("%d",&nilai[i]);
	
	printf("\n Output Data \n");
	for (i=0; i<5; i++)
		printf("%d \n",nilai [i]);
}
