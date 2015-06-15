#include<stdio.h>


int *add(int x,int y) {
	int z,*p;
	p = &z;
	z = x + y;
	return p;
}

int sub(int x,int y,int z) {
	int a,b,c,d;
	a = 3;
	b = 4;
	d = 5;
	return 0;
}
int main() {
	int *x;
	x= add(3,4);
	sub(1,2,3);	
	printf("test %d\n",*x);
}



// 传回这种局部变量的指针，可以看出这是种很危险的行为
