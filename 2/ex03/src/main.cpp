#include "Point.hpp"

int main( void ) {
	/*
	b
	| \
	a--c
	*/
	Point a(0, 0);
	Point b(30, 50);
	Point c(20, 0);
	Point pointA(10, 15);
	Point pointB(12, 21);
	std::cout << "10, 15 in triangle?: " << bsp(a, b, c, pointA) << std::endl;
	std::cout << "12, 21 in triangle?: " << bsp(a, b, c, pointB) << std::endl;
	//can double check with desmos, create label, create polygon
	return 0;
}
