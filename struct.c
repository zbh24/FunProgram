#include<stdio.h>
int main() {

	typedef struct A {
	    int a;
	    int b;
            struct A *next;
	} B,*C;

	B b1,b2,*b3;
	C c;
	b1.a = 4;

	c = b3 = &b1;	
	b1.next = &b2;
        b2.next = c;
	printf("test %d %d %d %d\n",&b1,b3,b1.a,b3->a);
	printf("test addr %d %d\n",&b1,b2.next);
        printf("test2 addr %d %d %d %d\n",b1.next,b2.next,b3->next,c->next);
}

// 1.地址：&b1.
//   值是：b1.a.
//   值还是地址，这还是严格区分的。
//2. 关于指针，指针里面存放的绝对是地址。next里存的就是下一个结构体的地址。
//   要想风问下一个结构体，就这样：c->a,c->b,c->next.
//   c->next得到是下一个结构体的地址。c->next <=> (*c).next

