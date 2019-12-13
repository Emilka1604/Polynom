#include "stack.h"
int main() {
	polynom p1, p2, p3;
	p1.parser("X^2");
	//p1.print();
	p2.parser("3*Z^2");
	//p2.print();
	p3 = p1 + p2;
	//p3.print();
	//p.cast();
	//p3.print();
	double a = -0;
	double b = 0;
	std::cout << p3.printp();
	//std::cout <<p3.printp()<<'\n';
	//std::cout << (-15) * 0;
	//std::cout<< p3.printp();
	/*int a[10];
	for (int i = 0; i < 10; i++) {
		a[i] = 100 - i;
	}
	for (int i = 0; i < 10; i++) {
		std::cout<<a[i] << " ";
	}
	std::cout << '\n';
	quickSort(a, 0, 9);
	for (int i = 0; i < 10; i++) {
		std::cout << a[i] << " ";
	}*/

	return 0;
}