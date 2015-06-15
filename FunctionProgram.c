#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
struct list {
 	int data;
	struct list *next;
};

struct list *Cons(int data,struct list *next){
	struct list *p = malloc(sizeof(*p));
	p->data = data;
	p->next = next;
	return p;
}

struct list *Nil(){
	return 0;
}

void printlist(struct list *l,int (*f)(int)) {
	switch ((int)l) {
	case 0:return;
	default:if (f(l->data)) 
			printf("%d\n",l->data);
		printlist(l->next,f);
	}

}

int g(int x) {
	return x > 2;
}

int h(int x) {
	printf("hello ");
	return x%2; 
}
int main() {
	struct list *x = Cons(1,Cons(2,Cons(3,Cons(4,Nil()))));
	printlist(x,(int (*)(int))(g));
	//printlist(x,h);
	return 0;
}
