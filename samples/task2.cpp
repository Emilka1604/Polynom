#include "stack.h"
#include <ctime>
const  unsigned int N = 100000;
void main() {
	int a[N];
	int i;
	for (i = 0; i < N; i++) {
		//a[i] = rand() % 1000;
		a[i] = i;
	}
	/*for (int i = 0; i < N; i++) {
		std::cout << a[i] << " ";
	}
	std::cout << '\n' << '\n';*/
	int start = clock();
	qsort(a, 0, N-1);
	int finish = clock();
	std::cout << finish - start;
	/*for (int i = 0; i < N; i++) {
		std::cout << a[i] << " ";
	}*/
}