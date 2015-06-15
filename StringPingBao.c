#include<stdio.h>


void delay() {
	int i = 0;
	while (i < 1000000)
		i++;
}

int main() {
	

	int i = 0;
	srand(3);	
	while (1) {
		//delay();
		i = 32 + rand()%(126 - 32);
		printf("\033[40;32m%c\033[0m",i);
	}
}
