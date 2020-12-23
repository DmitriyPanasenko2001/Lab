#include "Header.h"
int main() {
	setlocale(LC_ALL, "rus");
	Sum A;
	A.sum();
	A.show();

	Sum B(5, 6);
	Sum* px = &B;
	B.sum();
	B.show();

	Sum C;
	C.init(3, 3);
	C.sum();
	C.show();


}