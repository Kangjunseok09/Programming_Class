#include<stdio.h>

struct Po{
	int x;
	int y;
};
void f(struct Po *p){
	p->x += 10;
	p->y += 10;
	printf("%d %d\n", p->x, p->y);
}

int main(void){
	struct Po p = {1,2};
	f(&p);
	printf("%d %d\n", p.x, p.y);

	return 0;
	}