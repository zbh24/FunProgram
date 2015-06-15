
#define List(X) \
struct list_##X{  \
	X data;	\
	struct list_##X *next;	\
} ;\
\
int list_##X_length(struct list_##X) { \
	return 0;	\
}	\


int main () {

	List(int) l;
	List(double) l1;
}
