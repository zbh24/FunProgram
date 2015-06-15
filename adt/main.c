#include "list.h"
#include<stdio.h>


int main() {

	list l = creat(1,creat(2,creat(3,creat(4,0))));
	printf("The length is: %d\n",length(l));
}
