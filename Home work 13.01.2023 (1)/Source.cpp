#include "Calculator.h"
#include <iostream>

#include <windows.h>


int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Calculator a(6,3);
	a.sum();
	a.sub();
	a.mult();
	std::cout << a.div();
	Calculator b(5, 6);
	b.sum();
	b.sub();
	b.mult();
	std::cout << b.div();
}