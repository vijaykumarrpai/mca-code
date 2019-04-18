//demonstration of how the memory allocated in heap area in memory
#include <iostream>
int main()
{
	int *p;
	float *q;
	char *r;

	p= new int(10); // 2 bytes of memory allocation in heap area and the base address return to p
	q= new float(1.5); // 4bytes of memory allocation in heap area & base addr return to q
	r= new char('X'); // 1 byte of memory in heap area & base addr return to r
}