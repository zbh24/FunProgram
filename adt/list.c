#include "list.h"

struct list {
	int data;
	struct list *next;
};


list creat(int data,list next) {
	list tmp = malloc(sizeof(*tmp));
	tmp->data = data;
	tmp->next = next;
	return tmp;
}

int length(list l) {
	switch((int)l) {
		case 0:return 0;
		default:return 1 + length(l->next);

	}
}




