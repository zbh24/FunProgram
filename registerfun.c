#include<stdio.h>

struct reg {
	void (*fun)(int);
} a;

void print(int x) {
	printf("hello:%d\n",x);
}

int main() {
	int i = 0;
	a.fun = print;
	for (i = 0; i < 20; i++) {
		if (i == 5) {
			a.fun(i);
			break;
		} 
	}
}
