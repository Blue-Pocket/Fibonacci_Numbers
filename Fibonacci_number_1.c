/* 2021.12.17 Fri. 21:27 - 21:52 */
/* Fibonacci number */

#include<stdio.h>

int main(){

	int my_array[20];
	int i;
	my_array[0]=0;
	my_array[1]=1;

		for (i=2; i<20; i++){
			my_array[i] = my_array[i-2] + my_array[i-1];
			}

		for (i=0; i<20; i++){
			printf("%d\t",my_array[i]);
			}
			printf("\n");
	return 0;
}





